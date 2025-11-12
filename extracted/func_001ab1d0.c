void func_001ab1d0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x001ab1d0: addiu $sp, $sp, -0x10
    v1 = *(int32_t*)((gp) + -0x63f4);                           // 0x001ab1d8: lw $v1, -0x63f4($gp)
    if (v1 == 0) goto label_0x1ab220;                           // 0x001ab1dc: beqz $v1, 0x1ab220
    /* nop */                                                   // 0x001ab1e0: nop 
    a0 = *(int32_t*)((gp) + -0x63e0);                           // 0x001ab1e4: lw $a0, -0x63e0($gp)
    v1 = 1;                                                     // 0x001ab1e8: addiu $v1, $zero, 1
    if (a0 != v1) goto label_0x1ab20c;                          // 0x001ab1ec: bne $a0, $v1, 0x1ab20c
    v1 = a0 + -1;                                               // 0x001ab1f0: addiu $v1, $a0, -1
    func_0012ba78();  // 0x12ba50                                // 0x001ab1f4: jal 0x12ba50
    /* nop */                                                   // 0x001ab1f8: nop 
    v1 = *(int32_t*)((gp) + -0x63e0);                           // 0x001ab1fc: lw $v1, -0x63e0($gp)
    v1 = v1 + -1;                                               // 0x001ab200: addiu $v1, $v1, -1
    goto label_0x1ab220;                                        // 0x001ab204: b 0x1ab220
    *(uint32_t*)((gp) + -0x63e0) = v1;                          // 0x001ab208: sw $v1, -0x63e0($gp)
label_0x1ab20c:
    *(uint32_t*)((gp) + -0x63e0) = v1;                          // 0x001ab20c: sw $v1, -0x63e0($gp)
    v1 = *(int32_t*)((gp) + -0x63e0);                           // 0x001ab210: lw $v1, -0x63e0($gp)
    if (v1 >= 0) goto label_0x1ab220;                           // 0x001ab214: bgez $v1, 0x1ab220
    /* nop */                                                   // 0x001ab218: nop 
    *(uint32_t*)((gp) + -0x63e0) = 0;                           // 0x001ab21c: sw $zero, -0x63e0($gp)
label_0x1ab220:
    return;                                                     // 0x001ab224: jr $ra
    sp = sp + 0x10;                                             // 0x001ab228: addiu $sp, $sp, 0x10
}