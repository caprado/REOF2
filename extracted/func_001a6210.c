void func_001a6210() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x001a6210: addiu $sp, $sp, -0x10
    func_00188a68();  // 0x188828                                // 0x001a6218: jal 0x188828
    /* nop */                                                   // 0x001a621c: nop 
    v1 = 1;                                                     // 0x001a6220: addiu $v1, $zero, 1
    if (v0 == v1) goto label_0x1a6234;                          // 0x001a6224: beq $v0, $v1, 0x1a6234
    goto label_0x1a6244;                                        // 0x001a622c: b 0x1a6244
label_0x1a6234:
    func_0017ffd0();  // 0x17ff90                                // 0x001a6234: jal 0x17ff90
    /* nop */                                                   // 0x001a6238: nop 
    v0 = v0 ^ 1;                                                // 0x001a623c: xori $v0, $v0, 1
    v0 = ((unsigned)v0 < (unsigned)1) ? 1 : 0;                  // 0x001a6240: sltiu $v0, $v0, 1
label_0x1a6244:
    return;                                                     // 0x001a6248: jr $ra
    sp = sp + 0x10;                                             // 0x001a624c: addiu $sp, $sp, 0x10
}