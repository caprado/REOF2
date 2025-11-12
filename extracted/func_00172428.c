void func_00172428() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x00172428: addiu $sp, $sp, -0x20
    s2 = *(int32_t*)((s1) + 0x48);                              // 0x00172440: lw $s2, 0x48($s1)
    func_00172598();  // 0x1724e8                                // 0x00172444: jal 0x1724e8
    s0 = *(int32_t*)((s1) + 0x4c);                              // 0x00172448: lw $s0, 0x4c($s1)
    /* beqzl $v0, 0x1724d0 */                                   // 0x0017244c: beqzl $v0, 0x1724d0
    func_001725c8();  // 0x172598                                // 0x00172454: jal 0x172598
    v0 = 3;                                                     // 0x0017245c: addiu $v0, $zero, 3
    if (s0 == v0) goto label_0x1724c8;                          // 0x00172460: beq $s0, $v0, 0x1724c8
    v0 = (s0 < 4) ? 1 : 0;                                      // 0x00172464: slti $v0, $s0, 4
    if (v0 == 0) goto label_0x172488;                           // 0x00172468: beqz $v0, 0x172488
    v0 = 4;                                                     // 0x0017246c: addiu $v0, $zero, 4
    v0 = 2;                                                     // 0x00172470: addiu $v0, $zero, 2
    if (s0 == v0) goto label_0x1724a0;                          // 0x00172474: beq $s0, $v0, 0x1724a0
    goto label_0x1724d4;                                        // 0x0017247c: b 0x1724d4
    /* nop */                                                   // 0x00172484: nop 
label_0x172488:
    if (s0 == v0) goto label_0x1724a8;                          // 0x00172488: beq $s0, $v0, 0x1724a8
    v0 = 6;                                                     // 0x0017248c: addiu $v0, $zero, 6
    if (s0 == v0) goto label_0x1724a8;                          // 0x00172490: beq $s0, $v0, 0x1724a8
    goto label_0x1724d4;                                        // 0x00172498: b 0x1724d4
label_0x1724a0:
    goto label_0x1724cc;                                        // 0x001724a0: b 0x1724cc
    s2 = 2;                                                     // 0x001724a4: addiu $s2, $zero, 2
label_0x1724a8:
    func_00172908();  // 0x1728a0                                // 0x001724a8: jal 0x1728a0
    if (v0 == 0) goto label_0x1724c8;                           // 0x001724b0: beqz $v0, 0x1724c8
    func_001737e8();  // 0x1737c0                                // 0x001724b8: jal 0x1737c0
    s2 = 4;                                                     // 0x001724bc: addiu $s2, $zero, 4
    goto label_0x1724d0;                                        // 0x001724c0: b 0x1724d0
label_0x1724c8:
    s2 = 3;                                                     // 0x001724c8: addiu $s2, $zero, 3
label_0x1724cc:
label_0x1724d0:
label_0x1724d4:
    return;                                                     // 0x001724e0: jr $ra
    sp = sp + 0x20;                                             // 0x001724e4: addiu $sp, $sp, 0x20
}