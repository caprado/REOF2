void func_00161b50() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_0, local_4, local_8;
    
    sp = sp + -0x20;                                            // 0x00161b50: addiu $sp, $sp, -0x20
    func_00160850();  // 160850                                // 0x00161b6c: jal 0x160850
    s0 = s0 ^ 1;                                                // 0x00161b74: xori $s0, $s0, 1
    a3 = ((unsigned)s0 < (unsigned)1) ? 1 : 0;                  // 0x00161b8c: sltiu $a3, $s0, 1
    return func_0017d0f0();  // Tail call                       // 0x00161b98: j 0x17d0f0
    sp = sp + 0x20;                                             // 0x00161b9c: addiu $sp, $sp, 0x20
    sp = sp + -0x30;                                            // 0x00161ba0: addiu $sp, $sp, -0x30
    func_00160850();  // 160850                                // 0x00161bbc: jal 0x160850
    a2 = sp + 4;                                                // 0x00161bcc: addiu $a2, $sp, 4
    func_0017d108();  // 17d108                                // 0x00161bd0: jal 0x17d108
    a3 = sp + 8;                                                // 0x00161bd4: addiu $a3, $sp, 8
    v0 = local_8;                                               // 0x00161bd8: lw $v0, 8($sp)
    a0 = local_0;                                               // 0x00161bdc: lw $a0, 0($sp)
    v1 = v0 ^ 1;                                                // 0x00161be0: xori $v1, $v0, 1
    a1 = local_4;                                               // 0x00161be4: lw $a1, 4($sp)
    if (v1 != 0) v0 = 0;                                        // 0x00161be8: movn $v0, $zero, $v1
    *(uint32_t*)(s0) = a0;                                      // 0x00161bec: sw $a0, 0($s0)
    *(uint32_t*)(s1) = v0;                                      // 0x00161bf0: sw $v0, 0($s1)
    *(uint32_t*)(s2) = a1;                                      // 0x00161bf4: sw $a1, 0($s2)
    return;                                                     // 0x00161c08: jr $ra
    sp = sp + 0x30;                                             // 0x00161c0c: addiu $sp, $sp, 0x30
}