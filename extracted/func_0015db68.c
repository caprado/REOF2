void func_0015db68() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_0, local_4;
    
    sp = sp + -0x30;                                            // 0x0015db68: addiu $sp, $sp, -0x30
    v1 = s1 + 0xb4;                                             // 0x0015db78: addiu $v1, $s1, 0xb4
    a0 = 1;                                                     // 0x0015db80: addiu $a0, $zero, 1
    v0 = *(int32_t*)(v1);                                       // 0x0015db84: lw $v0, 0($v1)
    if (v0 == a0) goto label_0x15dbf8;                          // 0x0015db88: beql $v0, $a0, 0x15dbf8
    *(uint32_t*)(v1) = a0;                                      // 0x0015db90: sw $a0, 0($v1)
    *(uint32_t*)((v1) + 4) = 0;                                 // 0x0015db98: sw $zero, 4($v1)
    a2 = sp + 4;                                                // 0x0015db9c: addiu $a2, $sp, 4
    func_001756f8();  // 0x175660                                // 0x0015dba0: jal 0x175660
    a0 = *(int32_t*)((s1) + 0x40);                              // 0x0015dba4: lw $a0, 0x40($s1)
    /* bnezl $v0, 0x15dbf8 */                                   // 0x0015dba8: bnezl $v0, 0x15dbf8
    a1 = local_4;                                               // 0x0015dbb0: lw $a1, 4($sp)
    v0 = ((unsigned)a1 < (unsigned)0x800) ? 1 : 0;              // 0x0015dbb4: sltiu $v0, $a1, 0x800
    /* bnezl $v0, 0x15dbf8 */                                   // 0x0015dbb8: bnezl $v0, 0x15dbf8
    a0 = local_0;                                               // 0x0015dbc0: lw $a0, 0($sp)
    /* beqzl $a0, 0x15dbf8 */                                   // 0x0015dbc4: beqzl $a0, 0x15dbf8
    func_00178e78();  // 0x178db0                                // 0x0015dbcc: jal 0x178db0
    /* nop */                                                   // 0x0015dbd0: nop 
    if (s0 == 0) goto label_0x15dbf4;                           // 0x0015dbdc: beqz $s0, 0x15dbf4
    func_0015dce0();  // 0x15dc08                                // 0x0015dbe4: jal 0x15dc08
    /* nop */                                                   // 0x0015dbe8: nop 
    func_00178ec8();  // 0x178e78                                // 0x0015dbec: jal 0x178e78
label_0x15dbf4:
label_0x15dbf8:
    return;                                                     // 0x0015dc00: jr $ra
    sp = sp + 0x30;                                             // 0x0015dc04: addiu $sp, $sp, 0x30
}