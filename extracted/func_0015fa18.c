void func_0015fa18() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_24;
    
    sp = sp + -0x50;                                            // 0x0015fa18: addiu $sp, $sp, -0x50
    func_0015fcb0();  // 0x15fc80                                // 0x0015fa24: jal 0x15fc80
    if (v0 != 0) goto label_0x15fa50;                           // 0x0015fa30: bnez $v0, 0x15fa50
    a0 = 0x22 << 16;                                            // 0x0015fa38: lui $a0, 0x22
    func_001634a8();  // 0x163410                                // 0x0015fa3c: jal 0x163410
    a0 = &str_00227ca8;  // "E2080601 mwPlySetVideoCh: handle is invalid." // 0x0015fa40: addiu $a0, $a0, 0x7ca8
    goto label_0x15fa5c;                                        // 0x0015fa44: b 0x15fa5c
    v0 = -1;                                                    // 0x0015fa48: addiu $v0, $zero, -1
    /* nop */                                                   // 0x0015fa4c: nop 
label_0x15fa50:
    func_0015fb78();  // 0x15fb60                                // 0x0015fa50: jal 0x15fb60
    /* nop */                                                   // 0x0015fa54: nop 
    v0 = local_24;                                              // 0x0015fa58: lw $v0, 0x24($sp)
label_0x15fa5c:
    return;                                                     // 0x0015fa64: jr $ra
    sp = sp + 0x50;                                             // 0x0015fa68: addiu $sp, $sp, 0x50
}