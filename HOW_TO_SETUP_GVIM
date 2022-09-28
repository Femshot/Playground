This explains how to set up Vim on Ubuntu 18.04 on Windows Subsystem for Linux 2 (WSL2) in order to share the clipboard between Windows and Ubuntu.


## Environments
* Windows 10 Home
* Ubuntu 18.04 on Windows Subsystem for Linux 2 (WSL2)

## Steps
1. Build Vim with the clipboard option enabled
2. Set up [VcXsrv Windows X Server](https://sourceforge.net/projects/vcxsrv/)
3. Connect VcXsrv from Ubuntu on WSL2

## Build Vim with the clipboard option enabled
Install necessary dependencies to build Vim with the clipboard option enabled:

```bash
sudo apt install ncurses-dev libncurses5-dev libgnome2-dev libgnomeui-dev libgtk2.0-dev libatk1.0-dev libbonoboui2-dev libcairo2-dev libx11-dev libxpm-dev libxt-dev python-dev python3-dev ruby-dev lua5.1 lua5.1-dev libperl-dev
```

N.B. Not all of them are required to build Vim with +clipboard, so skip installing unnecessary libraries if you want

Build Vim following [the official guide](https://www.vim.org/download.php):

```bash
cd /usr/local/src
sudo git clone https://github.com/vim/vim.git
cd vim/src
sudo make distclean  # if you build Vim before
sudo make
sudo make install
```

## 2. Set up VcXsrv Windows X Server
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

## 3. Connect VxXsrv from Ubuntu on WSL2
Log in to Ubuntu on WSL2 and set the `DISPLAY` environment variable:

```bash
LOCAL_IP=$(cat /etc/resolv.conf | grep nameserver | awk '{print $2}')
export DISPLAY=$LOCAL_IP:0
```

That's it! Enjoy your Vim life on Windows!

## References
* [Xfce4 Desktop Environment and X Server for Ubuntu on WSL 2](https://autoize.com/xfce4-desktop-environment-and-x-server-for-ubuntu-on-wsl-2/)
* [How do I copy whole text from vim to clipboard at once?](https://www.reddit.com/r/bashonubuntuonwindows/comments/be2q3l/how_do_i_copy_whole_text_from_vim_to_clipboard_at/)
