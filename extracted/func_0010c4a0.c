void func_0010c4a0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x0010c4a0: addiu $sp, $sp, -0x10
    v0 = 0x1f << 16;                                            // 0x0010c4a4: lui $v0, 0x1f
    a2 = g_001efdf0;  // Global at 0x001efdf0                   // 0x0010c4ac: lw $a2, -0x210($v0)
    a2 = a2 + 0x5c;                                             // 0x0010c4b4: addiu $a2, $a2, 0x5c
    goto label_0x10c4c0;                                        // 0x0010c4b8: j 0x10c4c0
    sp = sp + 0x10;                                             // 0x0010c4bc: addiu $sp, $sp, 0x10
label_0x10c4c0:
    if (a0 != 0) goto label_0x10c4d8;                           // 0x0010c4c0: bnez $a0, 0x10c4d8
    a0 = *(int32_t*)(a2);                                       // 0x0010c4c8: lw $a0, 0($a2)
    if (a0 == 0) return;  // Branch to 0x10c580                 // 0x0010c4cc: beqz $a0, 0x10c580
label_0x10c4d8:
    t0 = *(int8_t*)(a0);                                        // 0x0010c4d8: lb $t0, 0($a0)
    v1 = *(int8_t*)(a3);                                        // 0x0010c4dc: lb $v1, 0($a3)
    a3 = a3 + 1;                                                // 0x0010c4e0: addiu $a3, $a3, 1
    if (v1 == 0) goto label_0x10c51c;                           // 0x0010c4e4: beqz $v1, 0x10c51c
    a0 = a0 + 1;                                                // 0x0010c4e8: addiu $a0, $a0, 1
    /* nop */                                                   // 0x0010c4ec: nop 
label_0x10c4f0:
    /* nop */                                                   // 0x0010c4f0: nop 
    /* nop */                                                   // 0x0010c4f4: nop 
    if (t0 == v1) goto label_0x10c4d8;                          // 0x0010c4f8: beql $t0, $v1, 0x10c4d8
    v1 = *(int8_t*)(a3);                                        // 0x0010c500: lb $v1, 0($a3)
    /* nop */                                                   // 0x0010c504: nop 
    /* nop */                                                   // 0x0010c508: nop 
    /* nop */                                                   // 0x0010c50c: nop 
    /* nop */                                                   // 0x0010c510: nop 
    if (v1 != 0) goto label_0x10c4f0;                           // 0x0010c514: bnez $v1, 0x10c4f0
    a3 = a3 + 1;                                                // 0x0010c518: addiu $a3, $a3, 1
label_0x10c51c:
    /* bnezl $t0, 0x10c530 */                                   // 0x0010c51c: bnezl $t0, 0x10c530
    v0 = a0 + -1;                                               // 0x0010c520: addiu $v0, $a0, -1
    *(uint32_t*)(a2) = 0;                                       // 0x0010c524: sw $zero, 0($a2)
    return;                                                     // 0x0010c528: jr $ra
}