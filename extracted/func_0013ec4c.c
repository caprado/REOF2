void func_0013ec4c() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x0013ec4c: addiu $sp, $sp, -0x10
    /* beqzl $a2, 0x13ec5c */                                   // 0x0013ec54: beqzl $a2, 0x13ec5c
    /* break (trap) */                                          // 0x0013ec58: break 0, 7
    /* mfhi $v1 */                                              // 0x0013ec5c
    /* beqzl $v1, 0x13ec98 */                                   // 0x0013ec60: beqzl $v1, 0x13ec98
    v0 = 0 | 0xbb80;                                            // 0x0013ec64: ori $v0, $zero, 0xbb80
    a0 = 0x22 << 16;                                            // 0x0013ec68: lui $a0, 0x22
    func_00116508();  // 116508                                // 0x0013ec6c: jal 0x116508
    a0 = &str_00226140;  // "PS2RNA_SetBitPerSmpl: not support %d bps\n" // 0x0013ec70: addiu $a0, $a0, 0x6140
    /* nop */                                                   // 0x0013ec74: nop 
label_0x13ec78:
    /* nop */                                                   // 0x0013ec78: nop 
    /* nop */                                                   // 0x0013ec7c: nop 
    /* nop */                                                   // 0x0013ec80: nop 
    /* nop */                                                   // 0x0013ec84: nop 
    /* nop */                                                   // 0x0013ec88: nop 
    goto label_0x13ec78;                                        // 0x0013ec8c: b 0x13ec78
    /* nop */                                                   // 0x0013ec90: nop 
    /* nop */                                                   // 0x0013ec94: nop 
    if (a2 == v0) goto label_0x13ecec;                          // 0x0013ec98: beq $a2, $v0, 0x13ecec
    /* divide: v0 / a2 -> hi:lo */                              // 0x0013eca0: div $zero, $v0, $a2
    /* beqzl $a2, 0x13ecac */                                   // 0x0013eca4: beqzl $a2, 0x13ecac
    /* break (trap) */                                          // 0x0013eca8: break 0, 7
    /* mflo $v0 */                                              // 0x0013ecac
    v0 = v0 & 1;                                                // 0x0013ecb0: andi $v0, $v0, 1
    if (v0 == 0) goto label_0x13ece8;                           // 0x0013ecb4: beqz $v0, 0x13ece8
    a0 = 0x22 << 16;                                            // 0x0013ecbc: lui $a0, 0x22
    func_00116508();  // 116508                                // 0x0013ecc0: jal 0x116508
    a0 = &str_00226140;  // "PS2RNA_SetBitPerSmpl: not support %d bps\n" // 0x0013ecc4: addiu $a0, $a0, 0x6140
label_0x13ecc8:
    /* nop */                                                   // 0x0013ecc8: nop 
    /* nop */                                                   // 0x0013eccc: nop 
    /* nop */                                                   // 0x0013ecd0: nop 
    /* nop */                                                   // 0x0013ecd4: nop 
    /* nop */                                                   // 0x0013ecd8: nop 
    goto label_0x13ecc8;                                        // 0x0013ecdc: b 0x13ecc8
    /* nop */                                                   // 0x0013ece0: nop 
    /* nop */                                                   // 0x0013ece4: nop 
label_0x13ece8:
label_0x13ecec:
    g_00226168 = a2;  // Global at 0x00226168                   // 0x0013ecec: sw $a2, 0x28($a0)
    return;                                                     // 0x0013ecf0: jr $ra
    sp = sp + 0x10;                                             // 0x0013ecf4: addiu $sp, $sp, 0x10
}