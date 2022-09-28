This explains how to set up Vim on Ubuntu 18.04 on Windows Subsystem for Linux 2 (WSL2) to activate GUI interface.


## Environments
* Windows 10 Home
* Ubuntu 18.04 on Windows Subsystem for Linux 2 (WSL2)

## Steps
1. Install vim/gvim with:
```bash
sudo apt install vim-gtk3
```
2. Set up [VcXsrv Windows X Server](https://sourceforge.net/projects/vcxsrv/)
3. Connect VcXsrv from Ubuntu on WSL2

## 1. Set up VcXsrv Windows X Server
Download and install [VcXsrv Windows X Server](https://sourceforge.net/projects/vcxsrv/),
then run XLaunch with the following options:

* Multiple windows (default)
* Start no client (default)
* Extra settings
  * Clipboard (default)
    * Primary Selection (default)
  * Native opengl (default)
  * Disable access control
  
Basically, you just need to tick all of the extra options. Other than that, every setting is the default.
Click the [Save configuration] button and save the configuration in `C:\Users\<USER NAME>\AppData\Roaming\Microsoft\Windows\Start Menu\Programs\Startup` in order to start VcXsrv when Windows starts.

## 2. Connect VxXsrv from Ubuntu on WSL2
Log in to Ubuntu on WSL2 and set the `DISPLAY` environment variable:

```bash
LOCAL_IP=$(cat /etc/resolv.conf | grep nameserver | awk '{print $2}')
export DISPLAY=$LOCAL_IP:0
```

That's it! Enjoy your Vim life on Windows!

## References
* [Xfce4 Desktop Environment and X Server for Ubuntu on WSL 2](https://autoize.com/xfce4-desktop-environment-and-x-server-for-ubuntu-on-wsl-2/)
* [How do I copy whole text from vim to clipboard at once?](https://www.reddit.com/r/bashonubuntuonwindows/comments/be2q3l/how_do_i_copy_whole_text_from_vim_to_clipboard_at/)
* [necojackrc - Setup vim with clipboard on ubuntu on WSL2](https://gist.github.com/02c3c81e1525bb5dc3561f378e921541.git)
