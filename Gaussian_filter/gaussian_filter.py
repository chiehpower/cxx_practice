'''
Author: Chieh
'''
import numpy as np
import cv2
from scipy.ndimage import gaussian_filter

if __name__ == '__main__':
    graph_path = 'test.png'
    img = cv2.imread(graph_path).astype(np.uint8)
    save_image_result = True # False

    img_filter = gaussian_filter(img, sigma=4.0)
    print(img_filter)
    if save_image_result:
        # img_filter = ((img_filter > 50)*img_filter).astype(np.uint8)
        cv2.imwrite('python_nofilter_gaussian_filter_result.png', img_filter)