mod_granska.la: mod_granska.slo
	$(SH_LINK) -rpath $(libexecdir) -module -avoid-version  mod_granska.lo
DISTCLEAN_TARGETS = modules.mk
shared =  mod_granska.la
