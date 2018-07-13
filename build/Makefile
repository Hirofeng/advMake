.PHONY: all clean

#huge目录下的makefile链接所以lib.a库文件生成exe，因此该makefile必须在最后执行
DIRS =  $(ROOT)/source/foo \
	$(ROOT)/source/bar \
	$(ROOT)/source/main  

RM = rm
RMFLAGS = -fr
RMS = $(ROOT)/build/exes $(ROOT)/build/libs

all:
	@set -e; \
	for dir in $(DIRS); \
	do \
		cd $$dir && $(MAKE) ; \
	done
	@echo ""
	@echo ":-) Completed"
	@echo ""
	
clean:
	@set -e; \
	for dir in $(DIRS); \
	do \
		cd $$dir && $(MAKE) clean;\
	done
	$(RM) $(RMFLAGS) $(RMS)
	@echo ""
	@echo ":-) Completed"
	@echo ""
