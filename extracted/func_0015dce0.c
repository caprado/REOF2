void func_0015dce0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_0, local_4;
    
    sp = sp + -0x10;                                            // 0x0015dce0: addiu $sp, $sp, -0x10
    v0 = a0 + 0xb4;                                             // 0x0015dce4: addiu $v0, $a0, 0xb4
    *(uint32_t*)((v0) + 4) = 0;                                 // 0x0015dcf0: sw $zero, 4($v0)
    *(uint32_t*)(v0) = 0;                                       // 0x0015dcf8: sw $zero, 0($v0)
    return func_00161250();  // Tail call                        // 0x0015dcfc: j 0x161238
    sp = sp + 0x10;                                             // 0x0015dd00: addiu $sp, $sp, 0x10
    /* nop */                                                   // 0x0015dd04: nop 
    sp = sp + -0x30;                                            // 0x0015dd08: addiu $sp, $sp, -0x30
    v0 = *(int32_t*)((a1) + 0x38);                              // 0x0015dd20: lw $v0, 0x38($a1)
    s2 = *(int32_t*)((v0) + 4);                                 // 0x0015dd24: lw $s2, 4($v0)
    func_0015e5f0();  // 15e5f0                                // 0x0015dd28: jal 0x15e5f0
    s1 = *(int32_t*)(v0);                                       // 0x0015dd2c: lw $s1, 0($v0)
    v1 = 1;                                                     // 0x0015dd30: addiu $v1, $zero, 1
    if (v0 != v1) goto label_0x15ddf4;                          // 0x0015dd34: bnel $v0, $v1, 0x15ddf4
    v0 = *(int32_t*)((s0) + 0xd8);                              // 0x0015dd3c: lw $v0, 0xd8($s0)
    /* beqzl $v0, 0x15ddf4 */                                   // 0x0015dd40: beqzl $v0, 0x15ddf4
    if (s1 == 0) goto label_0x15dd78;                           // 0x0015dd48: beqz $s1, 0x15dd78
    v0 = (s2 < 5) ? 1 : 0;                                      // 0x0015dd4c: slti $v0, $s2, 5
    /* bnezl $v0, 0x15dd7c */                                   // 0x0015dd50: bnezl $v0, 0x15dd7c
    local_0 = 0;                                                // 0x0015dd54: sw $zero, 0($sp)
    a0 = s1 + 4;                                                // 0x0015dd58: addiu $a0, $s1, 4
    a1 = s2 + -4;                                               // 0x0015dd5c: addiu $a1, $s2, -4
    func_0017e360();  // 17e360                                // 0x0015dd64: jal 0x17e360
    a3 = sp + 4;                                                // 0x0015dd68: addiu $a3, $sp, 4
    goto label_0x15dd84;                                        // 0x0015dd6c: b 0x15dd84
    v0 = local_0;                                               // 0x0015dd70: lw $v0, 0($sp)
    /* nop */                                                   // 0x0015dd74: nop 
label_0x15dd78:
    local_0 = 0;                                                // 0x0015dd78: sw $zero, 0($sp)
    local_4 = 0;                                                // 0x0015dd7c: sw $zero, 4($sp)
    v0 = local_0;                                               // 0x0015dd80: lw $v0, 0($sp)
label_0x15dd84:
    if (v0 == 0) goto label_0x15ddd8;                           // 0x0015dd84: beqz $v0, 0x15ddd8
    a3 = local_4;                                               // 0x0015dd88: lw $a3, 4($sp)
    if (a3 <= 0) goto label_0x15dddc;                           // 0x0015dd8c: blezl $a3, 0x15dddc
    *(uint32_t*)((s0) + 0xe0) = 0;                              // 0x0015dd90: sw $zero, 0xe0($s0)
    v0 = *(int32_t*)((s0) + 0xdc);                              // 0x0015dd94: lw $v0, 0xdc($s0)
    a0 = *(int32_t*)((s0) + 0xd8);                              // 0x0015dd9c: lw $a0, 0xd8($s0)
    v1 = (v0 < a3) ? 1 : 0;                                     // 0x0015dda0: slt $v1, $v0, $a3
    if (v1 != 0) a3 = v0;                                       // 0x0015dda8: movn $a3, $v0, $v1
    func_00107c70();  // 107c70                                // 0x0015ddac: jal 0x107c70
    local_4 = a3;                                               // 0x0015ddb0: sw $a3, 4($sp)
    a1 = local_0;                                               // 0x0015ddb4: lw $a1, 0($sp)
    a0 = *(int32_t*)((s0) + 0xd8);                              // 0x0015ddb8: lw $a0, 0xd8($s0)
    func_00107ab8();  // 107ab8                                // 0x0015ddbc: jal 0x107ab8
    a2 = local_4;                                               // 0x0015ddc0: lw $a2, 4($sp)
    v1 = *(int32_t*)((s0) + 0xd8);                              // 0x0015ddc4: lw $v1, 0xd8($s0)
    v0 = local_4;                                               // 0x0015ddc8: lw $v0, 4($sp)
    *(uint32_t*)((s0) + 0xe0) = v1;                             // 0x0015ddcc: sw $v1, 0xe0($s0)
    goto label_0x15dde0;                                        // 0x0015ddd0: b 0x15dde0
    *(uint32_t*)((s0) + 0xe4) = v0;                             // 0x0015ddd4: sw $v0, 0xe4($s0)
label_0x15ddd8:
    *(uint32_t*)((s0) + 0xe0) = 0;                              // 0x0015ddd8: sw $zero, 0xe0($s0)
label_0x15dddc:
    *(uint32_t*)((s0) + 0xe4) = 0;                              // 0x0015dddc: sw $zero, 0xe4($s0)
label_0x15dde0:
    a1 = *(int32_t*)((a0) + 0xe0);                              // 0x0015dde4: lw $a1, 0xe0($a0)
    func_00161d50();  // 161d50                                // 0x0015dde8: jal 0x161d50
    a2 = *(int32_t*)((a0) + 0xe4);                              // 0x0015ddec: lw $a2, 0xe4($a0)
label_0x15ddf4:
    return;                                                     // 0x0015de00: jr $ra
    sp = sp + 0x30;                                             // 0x0015de04: addiu $sp, $sp, 0x30
}