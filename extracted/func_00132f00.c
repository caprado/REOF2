void func_00132f00() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    v1 = (a3 < 2) ? 1 : 0;                                      // 0x00132f04: slti $v1, $a3, 2
    if (v1 != 0) goto label_0x132f38;                           // 0x00132f08: bnez $v1, 0x132f38
    v1 = *(uint16_t*)(a0);                                      // 0x00132f10: lhu $v1, 0($a0)
    a1 = 0 | 0x8001;                                            // 0x00132f14: ori $a1, $zero, 0x8001
    a0 = v1 << 8;                                               // 0x00132f18: sll $a0, $v1, 8
    v1 = (unsigned)v1 >> 8;                                     // 0x00132f1c: srl $v1, $v1, 8
    v1 = v1 | a0;                                               // 0x00132f20: or $v1, $v1, $a0
    v1 = v1 & 0xffff;                                           // 0x00132f24: andi $v1, $v1, 0xffff
    if (v1 != a1) goto label_0x132f38;                          // 0x00132f28: bne $v1, $a1, 0x132f38
    /* nop */                                                   // 0x00132f2c: nop 
    *(uint32_t*)(a2) = a3;                                      // 0x00132f30: sw $a3, 0($a2)
    v0 = 1;                                                     // 0x00132f34: addiu $v0, $zero, 1
label_0x132f38:
    return;                                                     // 0x00132f38: jr $ra
    /* nop */                                                   // 0x00132f3c: nop 
}