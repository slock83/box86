#ifdef GO

GO(iFv)
GO(iFi, i32(0))
GO(iFp, p(0))
GO(iFu, u32(0))
GO(iFEp, emu, p(0))
GO(iFii, i32(0), i32(4))
GO(iFip, i32(0), p(4))
GO(iFpi, p(0), i32(4))
GO(iFpp, p(0), p(4))
GO(iFpu, p(0), u32(4))
GO(iFui, u32(0), i32(4))
GO(iFup, u32(0), p(4))
GO(iFuu, u32(0), u32(4))
GOW(iFpV, iFpp_t, p(0), (void*)stack(4))
GO(iFpii, p(0), i32(4), i32(8))
GO(iFpip, p(0), i32(4), p(8))
GO(iFppi, p(0), p(4), i32(8))
GO(iFppu, p(0), p(4), u32(8))
GO(iFppp, p(0), p(4), p(8))
GO(iFEpp, emu, p(0), p(4))
GOW(iF1pV, iFipp_t, 1, p(0), (void*)stack(4))
GO(iFuipp, u32(0), i32(4), p(8), p(12))
GO(iFiWii, i32(0), u16(4), i32(8), i32(12))
GO(iFipii, i32(0), p(4), i32(8), i32(12))
GO(iFpipp, p(0), i32(4), p(8), p(12))
GO(iFpppi, p(0), p(4), p(8), i32(12))
GO(iFpuup, p(0), u32(4), u32(8), p(12))
GO(iFEpipp, emu, p(0), i32(4), p(8), p(12))
GOW(iFopV, iFppp_t, (void*)stdout, p(0), (void*)stack(4))
GOW(iFvopV, iFppp_t, (void*)stdout, p(4), (void*)stack(8))
GO(iFEpppp, emu, p(0), p(4), p(8), p(12))
GO(iFipiii, i32(0), p(4), i32(8), i32(12), i32(16))
GO(iFpppii, p(0), p(4), p(8), i32(12), i32(16))
GO(iFppppp, p(0), p(4), p(8), p(12), p(16))
GO(iFpiuuuu, p(0), i32(4), u32(8), u32(12), u32(16), u32(20))
GO(iFppuiiu, p(0), p(4), u32(8), i32(12), i32(16), u32(20))
GO(iFppiiuui, p(0), p(4), i32(8), i32(12), u32(16), u32(20), i32(24))
GO(iFEpippppp, emu, p(0), i32(4), p(8), p(12), p(16), p(20), p(24))
GO(iFppiuiippu, p(0), p(4), i32(8), u32(12), i32(16), i32(20), p(24), p(28), u32(32))
GO(iFppppiiiiuu, p(0), p(4), p(8), p(12), i32(16), i32(20), i32(24), i32(28), u32(32), u32(36))
GO(iFpppiiipppppp, p(0), p(4), p(8), i32(12), i32(16), i32(20), p(24), p(28), p(32), p(36), p(40), p(44))

#else
#error Meh
#endif