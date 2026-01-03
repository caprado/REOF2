void func_0016a968() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_0, local_4, local_8, local_c;
    
    sp = sp + -0x50;                                            // 0x0016a968: addiu $sp, $sp, -0x50
    t0 = 8;                                                     // 0x0016a96c: addiu $t0, $zero, 8
    v0 = 1;                                                     // 0x0016a9a4: addiu $v0, $zero, 1
    v1 = *(int32_t*)((s5) + 0x1b00);                            // 0x0016a9a8: lw $v1, 0x1b00($s5)
    if (v1 == t0) goto label_0x16aa1c;                          // 0x0016a9ac: beq $v1, $t0, 0x16aa1c
    func_00166c20();  // 166c20                                // 0x0016a9b4: jal 0x166c20
    /* nop */                                                   // 0x0016a9b8: nop 
    v1 = local_0;                                               // 0x0016a9c0: lw $v1, 0($sp)
    s2 = local_4;                                               // 0x0016a9c8: lw $s2, 4($sp)
    v0 = 1;                                                     // 0x0016a9cc: addiu $v0, $zero, 1
    s3 = local_8;                                               // 0x0016a9d4: lw $s3, 8($sp)
    if (v1 == 0) goto label_0x16aa1c;                           // 0x0016a9d8: beqz $v1, 0x16aa1c
    s4 = local_c;                                               // 0x0016a9dc: lw $s4, 0xc($sp)
    func_0016aa40();  // 16aa40                                // 0x0016a9e0: jal 0x16aa40
    /* nop */                                                   // 0x0016a9e4: nop 
    v0 = 1;                                                     // 0x0016a9ec: addiu $v0, $zero, 1
    if (s1 != v0) goto label_0x16aa1c;                          // 0x0016a9f0: bnel $s1, $v0, 0x16aa1c
    if (s2 == 0) goto label_0x16aa08;                           // 0x0016a9f8: beqz $s2, 0x16aa08
    /* call function at address in s2 */                        // 0x0016aa00: jalr $s2
label_0x16aa08:
    if (s3 == 0) goto label_0x16aa18;                           // 0x0016aa08: beqz $s3, 0x16aa18
    /* call function at address in s3 */                        // 0x0016aa10: jalr $s3
label_0x16aa18:
label_0x16aa1c:
    return;                                                     // 0x0016aa38: jr $ra
    sp = sp + 0x50;                                             // 0x0016aa3c: addiu $sp, $sp, 0x50
}