from itertools import cycle
from PIL import Image, ImageTk
import time
import tkinter as tk

root=tk.Tk()
root.title("Image Slidshow Viewer")

#List of image Path
image_paths = [
    r"C:\Users\chetan rathore\OneDrive\Pictures\White Clouds In The Sky.jpeg"
    r"C:\Users\chetan rathore\OneDrive\Pictures\Camera imports\2026-02-21\IMG_20251002_165717_610.jpg"
    r"C:\Users\chetan rathore\OneDrive\Pictures\Camera imports\2026-02-21\6691.jpg"
    r"C:\Users\chetan rathore\OneDrive\Pictures\Camera imports\2026-02-21\6697.jpg"
    r"C:\Users\chetan rathore\OneDrive\Pictures\Camera imports\2026-02-21\6698.jpg"
]

#Resize the images to 1080x1080
image_size=(500,500)
images=[Image.open(path).resize(image_size) for path in image_paths]
photo_images = [ImageTk.PhotoImage(img) for img in images]

label = tk.Label(root)
label.pack()

def update_image():
    photo = next(slideshow)
    label.config(image=photo)

    root.after(3000, update_image)

def start_slideshow():
    update_image()

#button
play_button = tk.Button(root, text="Play Slideshow", command=start_slideshow)
play_button.pack()

root.mainloop()

