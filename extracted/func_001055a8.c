void func_001055a8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    v1 = *(int8_t*)(a1);                                        // 0x001055a8: lb $v1, 0($a1)
    v0 = 0x72;                                                  // 0x001055ac: addiu $v0, $zero, 0x72
    if (v1 == v0) goto label_0x1055e8;                          // 0x001055b0: beq $v1, $v0, 0x1055e8
    v0 = (v1 < 0x73) ? 1 : 0;                                   // 0x001055b4: slti $v0, $v1, 0x73
    if (v0 == 0) goto label_0x1055d8;                           // 0x001055b8: beqz $v0, 0x1055d8
    v0 = 0x77;                                                  // 0x001055bc: addiu $v0, $zero, 0x77
    v0 = 0x61;                                                  // 0x001055c0: addiu $v0, $zero, 0x61
    if (v1 == v0) goto label_0x105608;                          // 0x001055c4: beq $v1, $v0, 0x105608
    t0 = 0x108;                                                 // 0x001055c8: addiu $t0, $zero, 0x108
    goto label_0x105618;                                        // 0x001055cc: b 0x105618
    v1 = 0x16;                                                  // 0x001055d0: addiu $v1, $zero, 0x16
    /* nop */                                                   // 0x001055d4: nop 
label_0x1055d8:
    if (v1 == v0) goto label_0x1055f8;                          // 0x001055d8: beq $v1, $v0, 0x1055f8
    t0 = 8;                                                     // 0x001055dc: addiu $t0, $zero, 8
    goto label_0x105618;                                        // 0x001055e0: b 0x105618
    v1 = 0x16;                                                  // 0x001055e4: addiu $v1, $zero, 0x16
label_0x1055e8:
    t0 = 4;                                                     // 0x001055e8: addiu $t0, $zero, 4
    return;  // Branch to 0x105628                              // 0x001055f0: b 0x105628
label_0x1055f8:
    v1 = 1;                                                     // 0x001055f8: addiu $v1, $zero, 1
    return;  // Branch to 0x105628                              // 0x001055fc: b 0x105628
    a3 = 0x600;                                                 // 0x00105600: addiu $a3, $zero, 0x600
    /* nop */                                                   // 0x00105604: nop 
label_0x105608:
    v1 = 1;                                                     // 0x00105608: addiu $v1, $zero, 1
    return;  // Branch to 0x105628                              // 0x0010560c: b 0x105628
    a3 = 0x208;                                                 // 0x00105610: addiu $a3, $zero, 0x208
    /* nop */                                                   // 0x00105614: nop 
label_0x105618:
    return;                                                     // 0x0010561c: jr $ra
    *(uint32_t*)(a0) = v1;                                      // 0x00105620: sw $v1, 0($a0)
}