# moviepy - pip install moviepy

import moviepy.editor

cvt_video = moviepy.editor.VideoFileClip("Time to Take Your First Step to DSA GeeksforGeeks School live DSA classes .3gpp")

ext_audio = cvt_video.audio

ext_audio.write_audiofile("audio_Extracted.mp3")