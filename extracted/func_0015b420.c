void func_0015b420() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    v0 = 0x25 << 16;                                            // 0x0015b420: lui $v0, 0x25
    v0 = v0 + 0x63f0;                                           // 0x0015b424: addiu $v0, $v0, 0x63f0
    a2 = g_00256444;  // Global at 0x00256444                   // 0x0015b428: lw $a2, 0x54($v0)
    if (a2 <= 0) goto label_0x15b464;                           // 0x0015b42c: blez $a2, 0x15b464
    v1 = g_00256448;  // Global at 0x00256448                   // 0x0015b430: lw $v1, 0x58($v0)
    v0 = a0 << 2;                                               // 0x0015b434: sll $v0, $a0, 2
    a3 = 2;                                                     // 0x0015b438: addiu $a3, $zero, 2
    a0 = v0 + 0x190;                                            // 0x0015b43c: addiu $a0, $v0, 0x190
label_0x15b440:
    v0 = *(int32_t*)((v1) + 0x188);                             // 0x0015b440: lw $v0, 0x188($v1)
    if (v0 != a3) goto label_0x15b454;                          // 0x0015b444: bne $v0, $a3, 0x15b454
    a2 = a2 + -1;                                               // 0x0015b448: addiu $a2, $a2, -1
    v0 = v1 + a0;                                               // 0x0015b44c: addu $v0, $v1, $a0
    g_002563f0 = a1;  // Global at 0x002563f0                   // 0x0015b450: sw $a1, 0($v0)
label_0x15b454:
    /* nop */                                                   // 0x0015b454: nop 
    /* nop */                                                   // 0x0015b458: nop 
    if (a2 != 0) goto label_0x15b440;                           // 0x0015b45c: bnez $a2, 0x15b440
    v1 = v1 + 0x3e0;                                            // 0x0015b460: addiu $v1, $v1, 0x3e0
label_0x15b464:
    return;                                                     // 0x0015b464: jr $ra
    /* nop */                                                   // 0x0015b468: nop 
}