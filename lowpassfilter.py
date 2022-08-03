import soundfile as sf
from scipy import signal
input_signal, fs = sf.read('filter_codes_Sound_Noise.wav')

sampl_freq=fs
order=4

cutoff_freq=4000.0

Wn=2*cutoff_freq/sampl_freq

b, a = signal.butter(order, Wn, 'low')

#filter the input signal with butterworth filter
output_signal= signal.filtfilt(b, a,input_signal)

#output
signal = signal.lfilter(b, a,input_signal)

#write the output signal into .wav file
sf.write(" Sound_With_Reduced_Noise.wav",output_signal, fs)
         
