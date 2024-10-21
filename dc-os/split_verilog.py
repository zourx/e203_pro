import os

def split_verilog_file(input_file, itcm_file, dtcm_file, itcm_start_addr="80000000", dtcm_start_addr="88000000"):
    with open(input_file, 'r') as infile:
        lines = infile.readlines()

    itcm_lines = []
    dtcm_lines = []
    current_section = None

    for line in lines:
        if line.startswith('@'):
            addr = line[1:].strip()
            if addr == itcm_start_addr:
                current_section = 'ITCM'
                itcm_lines.append(line)
            elif addr == dtcm_start_addr:
                current_section = 'DTCM'
                dtcm_lines.append(line)
            else:
                if current_section == 'ITCM':
                    itcm_lines.append(line)
                elif current_section == 'DTCM':
                    dtcm_lines.append(line)
        else:
            if current_section == 'ITCM':
                itcm_lines.append(line)
            elif current_section == 'DTCM':
                dtcm_lines.append(line)

    # Determine path to test directory in parent directory
    parent_dir = os.path.abspath(os.path.join(os.path.dirname(__file__), '..', 'test'))
    
    # Ensure the test directory exists, otherwise create it
    os.makedirs(parent_dir, exist_ok=True)

    # Write ITCM.verilog to test directory
    itcm_file_path = os.path.join(parent_dir, itcm_file)
    with open(itcm_file_path, 'w') as itcm_out:
        itcm_out.writelines(itcm_lines)

    # Write DTCM.verilog to test directory
    dtcm_file_path = os.path.join(parent_dir, dtcm_file)
    with open(dtcm_file_path, 'w') as dtcm_out:
        dtcm_out.writelines(dtcm_lines)

if __name__ == "__main__":
    split_verilog_file("os.verilog", "ITCM.verilog", "DTCM.verilog")