void func_00135718() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    a1 = 0x25 << 16;                                            // 0x00135718: lui $a1, 0x25
    v0 = a1 + 0x36a8;                                           // 0x0013571c: addiu $v0, $a1, 0x36a8
    v0 = v0 + 4;                                                // 0x00135720: addiu $v0, $v0, 4
    v1 = g_002536ac;  // Global at 0x002536ac                   // 0x00135724: lw $v1, 0($v0)
    if (v1 == 0) goto label_0x13575c;                           // 0x00135728: beqz $v1, 0x13575c
    a0 = a0 + 1;                                                // 0x00135734: addiu $a0, $a0, 1
    v0 = (a0 < 0x28) ? 1 : 0;                                   // 0x00135738: slti $v0, $a0, 0x28
    if (v0 == 0) goto label_0x13575c;                           // 0x0013573c: beqz $v0, 0x13575c
    v1 = v1 + 8;                                                // 0x00135740: addiu $v1, $v1, 8
    v0 = *(int32_t*)(v1);                                       // 0x00135744: lw $v0, 0($v1)
    /* nop */                                                   // 0x00135748: nop 
    /* nop */                                                   // 0x0013574c: nop 
    /* nop */                                                   // 0x00135750: nop 
    /* bnezl $v0, 0x135738 */                                   // 0x00135754: bnezl $v0, 0x135738
    a0 = a0 + 1;                                                // 0x00135758: addiu $a0, $a0, 1
label_0x13575c:
    v1 = 0x28;                                                  // 0x0013575c: addiu $v1, $zero, 0x28
    if (a0 == v1) goto label_0x135774;                          // 0x00135760: beq $a0, $v1, 0x135774
    v1 = a0 << 3;                                               // 0x00135768: sll $v1, $a0, 3
    v0 = a1 + 0x36a8;                                           // 0x0013576c: addiu $v0, $a1, 0x36a8
    v0 = v1 + v0;                                               // 0x00135770: addu $v0, $v1, $v0
label_0x135774:
    return;                                                     // 0x00135774: jr $ra
    /* nop */                                                   // 0x00135778: nop 
}