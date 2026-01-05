void func_00146280() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x00146280: addiu $sp, $sp, -0x20
    if (a2 == 0) goto label_0x1462ec;                           // 0x00146290: beqz $a2, 0x1462ec
    v0 = *(int32_t*)((s0) + 0x18c);                             // 0x00146298: lw $v0, 0x18c($s0)
    v1 = 3;                                                     // 0x0014629c: addiu $v1, $zero, 3
    if (v0 != v1) goto label_0x1462c8;                          // 0x001462a0: bne $v0, $v1, 0x1462c8
    v0 = *(int32_t*)((s0) + 0x168);                             // 0x001462a4: lw $v0, 0x168($s0)
    if (v0 != v1) goto label_0x1462b4;                          // 0x001462a8: bnel $v0, $v1, 0x1462b4
    a1 = *(int32_t*)((s0) + 0x1d0);                             // 0x001462ac: lw $a1, 0x1d0($s0)
    a1 = *(int32_t*)((s0) + 0x1dc);                             // 0x001462b0: lw $a1, 0x1dc($s0)
label_0x1462b4:
    a2 = a3 + -1;                                               // 0x001462b4: addiu $a2, $a3, -1
    func_00146a98();  // 146a98                                // 0x001462b8: jal 0x146a98
    goto label_0x1462f0;                                        // 0x001462c0: b 0x1462f0
    v1 = *(int32_t*)((s0) + 0x110);                             // 0x001462c4: lw $v1, 0x110($s0)
label_0x1462c8:
    if (v0 != v1) goto label_0x1462dc;                          // 0x001462c8: bnel $v0, $v1, 0x1462dc
    a1 = *(int32_t*)((s0) + 0x1e0);                             // 0x001462cc: lw $a1, 0x1e0($s0)
    a1 = *(int32_t*)((s0) + 0x1ec);                             // 0x001462d0: lw $a1, 0x1ec($s0)
    goto label_0x1462e0;                                        // 0x001462d4: b 0x1462e0
    a2 = *(int32_t*)((s0) + 0x1fc);                             // 0x001462d8: lw $a2, 0x1fc($s0)
label_0x1462dc:
    a2 = *(int32_t*)((s0) + 0x1f0);                             // 0x001462dc: lw $a2, 0x1f0($s0)
label_0x1462e0:
    a3 = a3 + -1;                                               // 0x001462e0: addiu $a3, $a3, -1
    func_00146ba8();  // 146ba8                                // 0x001462e4: jal 0x146ba8
label_0x1462ec:
    v1 = *(int32_t*)((s0) + 0x110);                             // 0x001462ec: lw $v1, 0x110($s0)
label_0x1462f0:
    v0 = 1;                                                     // 0x001462f0: addiu $v0, $zero, 1
    if (v1 != v0) goto label_0x146304;                          // 0x001462f4: bne $v1, $v0, 0x146304
    v0 = 2;                                                     // 0x001462fc: addiu $v0, $zero, 2
    *(uint32_t*)((s0) + 0x110) = v0;                            // 0x00146300: sw $v0, 0x110($s0)
label_0x146304:
    return;                                                     // 0x00146308: jr $ra
    sp = sp + 0x20;                                             // 0x0014630c: addiu $sp, $sp, 0x20
}