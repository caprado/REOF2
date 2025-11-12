void func_0015c66c() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x0015c66c: addiu $sp, $sp, -0x10
    v1 = t0 + 0xc8;                                             // 0x0015c674: addiu $v1, $t0, 0xc8
    if (a1 != 0) goto label_0x15c698;                           // 0x0015c678: bnez $a1, 0x15c698
    v0 = t0 + 0xbc;                                             // 0x0015c67c: addiu $v0, $t0, 0xbc
    *(uint32_t*)((v1) + 8) = 0;                                 // 0x0015c680: sw $zero, 8($v1)
    *(uint32_t*)((t0) + 0xd4) = v0;                             // 0x0015c684: sw $v0, 0xd4($t0)
    *(uint32_t*)(v1) = 0;                                       // 0x0015c688: sw $zero, 0($v1)
    goto label_0x15c6d4;                                        // 0x0015c68c: b 0x15c6d4
    *(uint32_t*)((v1) + 4) = 0;                                 // 0x0015c690: sw $zero, 4($v1)
    /* nop */                                                   // 0x0015c694: nop 
label_0x15c698:
    v0 = *(int32_t*)((t0) + 0x1c);                              // 0x0015c698: lw $v0, 0x1c($t0)
    v0 = v0 + 4;                                                // 0x0015c69c: addiu $v0, $v0, 4
    /* multiply: v0 * a3 -> hi:lo */                            // 0x0015c6a0: mult $ac2, $v0, $a3
    v0 = (a2 < v0) ? 1 : 0;                                     // 0x0015c6a4: slt $v0, $a2, $v0
    /* beqzl $v0, 0x15c6c8 */                                   // 0x0015c6a8: beqzl $v0, 0x15c6c8
    *(uint32_t*)(v1) = a1;                                      // 0x0015c6ac: sw $a1, 0($v1)
    a0 = 0x22 << 16;                                            // 0x0015c6b0: lui $a0, 0x22
    a0 = &str_00227108;  // "E20010703E MWSFCRE_DestroySfd: "   // 0x0015c6b8: addiu $a0, $a0, 0x7108
    return func_001634a8();  // Tail call                        // 0x0015c6bc: j 0x163410
    sp = sp + 0x10;                                             // 0x0015c6c0: addiu $sp, $sp, 0x10
    /* nop */                                                   // 0x0015c6c4: nop 
    *(uint32_t*)((v1) + 4) = a2;                                // 0x0015c6c8: sw $a2, 4($v1)
    *(uint32_t*)((v1) + 8) = a3;                                // 0x0015c6cc: sw $a3, 8($v1)
    *(uint32_t*)((t0) + 0xd4) = v1;                             // 0x0015c6d0: sw $v1, 0xd4($t0)
label_0x15c6d4:
    return func_0015c6e0();  // Tail call                        // 0x0015c6d8: j 0x15c580
    sp = sp + 0x10;                                             // 0x0015c6dc: addiu $sp, $sp, 0x10
    sp = sp + -0x10;                                            // 0x0015c6e0: addiu $sp, $sp, -0x10
    func_00173708();  // 0x173668                                // 0x0015c6e8: jal 0x173668
    /* nop */                                                   // 0x0015c6ec: nop 
    if (v0 == 0) goto label_0x15c718;                           // 0x0015c6f0: beqz $v0, 0x15c718
    a0 = -0x132;                                                // 0x0015c6f4: addiu $a0, $zero, -0x132
    func_0015e7e0();  // 0x15e7b0                                // 0x0015c6f8: jal 0x15e7b0
    /* nop */                                                   // 0x0015c6fc: nop 
    a0 = 0x22 << 16;                                            // 0x0015c700: lui $a0, 0x22
    a0 = &str_00227140;  // "E0203261: MWSFCRE_ResetSfdHn: SFD_Stop() failed." // 0x0015c708: addiu $a0, $a0, 0x7140
    return func_001634a8();  // Tail call                        // 0x0015c70c: j 0x163410
    sp = sp + 0x10;                                             // 0x0015c710: addiu $sp, $sp, 0x10
    /* nop */                                                   // 0x0015c714: nop 
label_0x15c718:
    return;                                                     // 0x0015c71c: jr $ra
    sp = sp + 0x10;                                             // 0x0015c720: addiu $sp, $sp, 0x10
}