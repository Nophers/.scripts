import os 

def get_data_from_user():
    with open('lol.txt', 'w') as f:
        for root, dirs, files in os.walk('/'):
            for name in files:
                f.write(os.path.join(root, name))
                f.write('\n')
            for name in dirs:
                f.write(os.path.join(root, name))
                f.write('\n')
get_data_from_user()