import os

def delete_all_empty_files_on_the_computer():
    for root, dirs, files in os.walk("/"):
        for file in files:
            if os.path.getsize(os.path.join(root, file)) == 0:
                os.remove(os.path.join(root, file))
                print("Deleted: ", os.path.join(root, file))
delete_all_empty_files_on_the_computer()
