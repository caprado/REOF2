void func_00189d00() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x30;                                            // 0x00189d00: addiu $sp, $sp, -0x30
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x00189d08: addu.qb $zero, $sp, $s1
    func_001991c0();  // 0x198ac0                                // 0x00189d14: jal 0x198ac0
    v1 = *(int32_t*)((s1) + 0x48);                              // 0x00189d1c: lw $v1, 0x48($s1)
    v0 = -1;                                                    // 0x00189d20: addiu $v0, $zero, -1
    if (v1 == v0) goto label_0x189d84;                          // 0x00189d24: beq $v1, $v0, 0x189d84
    func_0018a140();  // 0x189e20                                // 0x00189d34: jal 0x189e20
    func_0018b190();  // 0x18a140                                // 0x00189d40: jal 0x18a140
    func_0018bec0();  // 0x18be00                                // 0x00189d4c: jal 0x18be00
    func_0018db10();  // 0x18db00                                // 0x00189d54: jal 0x18db00
    a0 = *(int32_t*)((s1) + 0x1c);                              // 0x00189d58: lw $a0, 0x1c($s1)
    a2 = *(int32_t*)((s1) + 0x24);                              // 0x00189d5c: lw $a2, 0x24($s1)
    v1 = *(int32_t*)((s1) + 0x4c);                              // 0x00189d64: lw $v1, 0x4c($s1)
    a1 = *(int32_t*)((s1) + 0x34);                              // 0x00189d68: lw $a1, 0x34($s1)
    a3 = a2 + v0;                                               // 0x00189d6c: addu $a3, $a2, $v0
    a2 = *(int32_t*)((v1) + 0x14);                              // 0x00189d70: lw $a2, 0x14($v1)
    func_0018b370();  // 0x18b280                                // 0x00189d74: jal 0x18b280
    t0 = s1 + 0x60;                                             // 0x00189d78: addiu $t0, $s1, 0x60
    goto label_0x189d8c;                                        // 0x00189d7c: b 0x189d8c
    v1 = *(int32_t*)((gp) + -0x64c4);                           // 0x00189d80: lw $v1, -0x64c4($gp)
label_0x189d84:
    goto label_0x189d9c;                                        // 0x00189d84: b 0x189d9c
label_0x189d8c:
    v0 = 1;                                                     // 0x00189d8c: addiu $v0, $zero, 1
    v1 = v1 + 1;                                                // 0x00189d90: addiu $v1, $v1, 1
    *(uint32_t*)((gp) + -0x64c4) = v1;                          // 0x00189d94: sw $v1, -0x64c4($gp)
label_0x189d9c:
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x00189d9c: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x00189da0: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x00189da4: jr $ra
    sp = sp + 0x30;                                             // 0x00189da8: addiu $sp, $sp, 0x30
}