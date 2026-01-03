void func_00160860() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x00160860: addiu $sp, $sp, -0x10
    goto label_0x160878;                                        // 0x0016086c: j 0x160878
    sp = sp + 0x10;                                             // 0x00160870: addiu $sp, $sp, 0x10
    /* nop */                                                   // 0x00160874: nop 
label_0x160878:
    sp = sp + -0x20;                                            // 0x00160878: addiu $sp, $sp, -0x20
    func_001608f0();  // 1608f0                                // 0x00160898: jal 0x1608f0
    a0 = *(int32_t*)((s0) + 4);                                 // 0x0016089c: lw $a0, 4($s0)
    *(uint32_t*)(s1) = v0;                                      // 0x001608a4: sw $v0, 0($s1)
    func_00160950();  // 160950                                // 0x001608a8: jal 0x160950
    func_00160a08();  // 160a08                                // 0x001608b4: jal 0x160a08
    func_00160a28();  // 160a28                                // 0x001608c4: jal 0x160a28
    return func_00160ae8();  // Tail call                        // 0x001608e4: j 0x160a70
    sp = sp + 0x20;                                             // 0x001608e8: addiu $sp, $sp, 0x20
    /* nop */                                                   // 0x001608ec: nop 
    sp = sp + -0x10;                                            // 0x001608f0: addiu $sp, $sp, -0x10
    v0 = 2;                                                     // 0x001608f4: addiu $v0, $zero, 2
    a1 = ((unsigned)a0 < (unsigned)3) ? 1 : 0;                  // 0x001608fc: sltiu $a1, $a0, 3
    if (a0 == v0) goto label_0x16093c;                          // 0x00160900: beq $a0, $v0, 0x16093c
    v1 = 2;                                                     // 0x00160904: addiu $v1, $zero, 2
    /* beqzl $a1, 0x160920 */                                   // 0x00160908: beqzl $a1, 0x160920
    v0 = 3;                                                     // 0x0016090c: addiu $v0, $zero, 3
    v0 = 1;                                                     // 0x00160910: addiu $v0, $zero, 1
    goto label_0x160924;                                        // 0x00160914: b 0x160924
    v1 = 1;                                                     // 0x00160918: addiu $v1, $zero, 1
    /* nop */                                                   // 0x0016091c: nop 
    v1 = 3;                                                     // 0x00160920: addiu $v1, $zero, 3
label_0x160924:
    if (a0 == v0) goto label_0x160940;                          // 0x00160924: beq $a0, $v0, 0x160940
    a0 = 0x23 << 16;                                            // 0x0016092c: lui $a0, 0x23
    func_00163410();  // 163410                                // 0x00160930: jal 0x163410
    a0 = &str_00228128;  // "E301272 : picture_structure is invalid." // 0x00160934: addiu $a0, $a0, -0x7ed8
    v1 = 3;                                                     // 0x00160938: addiu $v1, $zero, 3
label_0x16093c:
label_0x160940:
    return;                                                     // 0x00160944: jr $ra
    sp = sp + 0x10;                                             // 0x00160948: addiu $sp, $sp, 0x10
}