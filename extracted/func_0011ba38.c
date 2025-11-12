void func_0011ba38() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_0;
    
    sp = sp + -0x50;                                            // 0x0011ba38: addiu $sp, $sp, -0x50
    s2 = 0x1f << 16;                                            // 0x0011ba40: lui $s2, 0x1f
    v0 = g_001f0400;  // Global at 0x001f0400                   // 0x0011ba48: lw $v0, 0x400($s2)
    if (v0 >= 0) goto label_0x11bb1c;                           // 0x0011ba50: bgez $v0, 0x11bb1c
    s1 = 0x25 << 16;                                            // 0x0011ba58: lui $s1, 0x25
    s0 = s1 + -0x280;                                           // 0x0011ba5c: addiu $s0, $s1, -0x280
label_0x11ba60:
    a1 = 0x8000 << 16;                                          // 0x0011ba60: lui $a1, 0x8000
    a1 = a1 | 6;                                                // 0x0011ba68: ori $a1, $a1, 6
    func_001176a8();  // 0x1174d8                                // 0x0011ba6c: jal 0x1174d8
    if (v0 >= 0) goto label_0x11ba84;                           // 0x0011ba74: bgezl $v0, 0x11ba84
    v0 = g_0024fda4;  // Global at 0x0024fda4                   // 0x0011ba78: lw $v0, 0x24($s0)
    goto label_0x11bb20;                                        // 0x0011ba7c: b 0x11bb20
    v0 = -1;                                                    // 0x0011ba80: addiu $v0, $zero, -1
label_0x11ba84:
    if (v0 == 0) goto label_0x11baec;                           // 0x0011ba84: beqz $v0, 0x11baec
    s1 = 0x25 << 16;                                            // 0x0011ba8c: lui $s1, 0x25
    g_001f0400 = 0;  // Global at 0x001f0400                    // 0x0011ba90: sw $zero, 0x400($s2)
    local_0 = 0;                                                // 0x0011ba94: sw $zero, 0($sp)
    a1 = 0xff;                                                  // 0x0011ba98: addiu $a1, $zero, 0xff
    t1 = s1 + -0x480;                                           // 0x0011baa8: addiu $t1, $s1, -0x480
    t2 = 4;                                                     // 0x0011baac: addiu $t2, $zero, 4
    func_001178a0();  // 0x1176a8                                // 0x0011bab0: jal 0x1176a8
    if (v0 >= 0) goto label_0x11bacc;                           // 0x0011bab8: bgez $v0, 0x11bacc
    v1 = 0x25 << 16;                                            // 0x0011babc: lui $v1, 0x25
    v0 = 0xfffe << 16;                                          // 0x0011bac0: lui $v0, 0xfffe
    goto label_0x11bb20;                                        // 0x0011bac4: b 0x11bb20
    v0 = v0 | 0xffff;                                           // 0x0011bac8: ori $v0, $v0, 0xffff
label_0x11bacc:
    a3 = s1 + -0x480;                                           // 0x0011bacc: addiu $a3, $s1, -0x480
    a2 = v1 + -0x258;                                           // 0x0011bad0: addiu $a2, $v1, -0x258
    /* lwl $a0, 3($a3) */                                       // 0x0011bad4: lwl $a0, 3($a3)
    /* lwr $a0, 0($a3) */                                       // 0x0011bad8: lwr $a0, 0($a3)
    /* swl $a0, 3($a2) */                                       // 0x0011badc: swl $a0, 3($a2)
    /* swr $a0, 0($a2) */                                       // 0x0011bae0: swr $a0, 0($a2)
    goto label_0x11bb20;                                        // 0x0011bae4: b 0x11bb20
label_0x11baec:
    v0 = 0x10 << 16;                                            // 0x0011baec: lui $v0, 0x10
    v1 = -1;                                                    // 0x0011baf0: addiu $v1, $zero, -1
    /* nop */                                                   // 0x0011baf4: nop 
label_0x11baf8:
    v0 = v0 + -1;                                               // 0x0011baf8: addiu $v0, $v0, -1
    /* nop */                                                   // 0x0011bafc: nop 
    /* nop */                                                   // 0x0011bb00: nop 
    /* nop */                                                   // 0x0011bb04: nop 
    /* nop */                                                   // 0x0011bb08: nop 
    if (v0 != v1) goto label_0x11baf8;                          // 0x0011bb0c: bne $v0, $v1, 0x11baf8
    /* nop */                                                   // 0x0011bb10: nop 
    goto label_0x11ba60;                                        // 0x0011bb14: b 0x11ba60
    s0 = s1 + -0x280;                                           // 0x0011bb18: addiu $s0, $s1, -0x280
label_0x11bb1c:
label_0x11bb20:
    return;                                                     // 0x0011bb30: jr $ra
    sp = sp + 0x50;                                             // 0x0011bb34: addiu $sp, $sp, 0x50
}