import os 

def delete_empty_folders():
    for root, dirs, files in os.walk("/"):
        for dir in dirs:
            if not os.listdir(os.path.join(root, dir)):
                os.rmdir(os.path.join(root, dir))
                print("Deleted: ", os.path.join(root, dir))
delete_empty_folders()