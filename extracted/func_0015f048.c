void func_0015f048() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_0;
    
    sp = sp + -0x10;                                            // 0x0015f048: addiu $sp, $sp, -0x10
    func_0015fcb0();  // 0x15fc80                                // 0x0015f054: jal 0x15fc80
    if (v0 != 0) goto label_0x15f080;                           // 0x0015f05c: bnez $v0, 0x15f080
    a0 = 0x22 << 16;                                            // 0x0015f064: lui $a0, 0x22
    a0 = &str_00227a20;  // "E1122604 mwSfdPause; handle is invalid." // 0x0015f070: addiu $a0, $a0, 0x7a20
    return func_001634a8();  // Tail call                        // 0x0015f074: j 0x163410
    sp = sp + 0x10;                                             // 0x0015f078: addiu $sp, $sp, 0x10
    /* nop */                                                   // 0x0015f07c: nop 
label_0x15f080:
    func_0015f048();  // 0x15efb0                                // 0x0015f080: jal 0x15efb0
    /* nop */                                                   // 0x0015f084: nop 
    func_00162858();  // 0x1627b8                                // 0x0015f08c: jal 0x1627b8
    *(uint32_t*)((s0) + 0x74) = 0;                              // 0x0015f094: sw $zero, 0x74($s0)
    a0 = *(int32_t*)((s0) + 0x4c);                              // 0x0015f098: lw $a0, 0x4c($s0)
    return func_0013ccc0();  // Tail call                        // 0x0015f0a4: j 0x13cc38
    sp = sp + 0x10;                                             // 0x0015f0a8: addiu $sp, $sp, 0x10
    /* nop */                                                   // 0x0015f0ac: nop 
    sp = sp + -0x40;                                            // 0x0015f0b0: addiu $sp, $sp, -0x40
    func_0015fcb0();  // 0x15fc80                                // 0x0015f0cc: jal 0x15fc80
    /* bnezl $v0, 0x15f0f0 */                                   // 0x0015f0d4: bnezl $v0, 0x15f0f0
    v0 = *(int8_t*)((s0) + 0x72);                               // 0x0015f0d8: lb $v0, 0x72($s0)
    a0 = 0x22 << 16;                                            // 0x0015f0dc: lui $a0, 0x22
    func_001634a8();  // 0x163410                                // 0x0015f0e0: jal 0x163410
    a0 = &str_00227a48;  // "E2007 mwSfdPause; can't pause (%s)" // 0x0015f0e4: addiu $a0, $a0, 0x7a48
    goto label_0x15f1b4;                                        // 0x0015f0e8: b 0x15f1b4
    if (v0 != 0) goto label_0x15f100;                           // 0x0015f0f0: bnez $v0, 0x15f100
    s3 = *(int32_t*)((s0) + 0x40);                              // 0x0015f0f4: lw $s3, 0x40($s0)
    /* beqzl $s2, 0x15f1b4 */                                   // 0x0015f0f8: beqzl $s2, 0x15f1b4
label_0x15f100:
    func_0015e658();  // 0x15e638                                // 0x0015f100: jal 0x15e638
    /* nop */                                                   // 0x0015f104: nop 
    v0 = 1;                                                     // 0x0015f10c: addiu $v0, $zero, 1
    if (v1 != v0) goto label_0x15f15c;                          // 0x0015f110: bne $v1, $v0, 0x15f15c
    s1 = *(int32_t*)((s0) + 0xc);                               // 0x0015f118: lw $s1, 0xc($s0)
    if (s1 != v1) goto label_0x15f15c;                          // 0x0015f11c: bne $s1, $v1, 0x15f15c
    /* nop */                                                   // 0x0015f120: nop 
    a1 = 6;                                                     // 0x0015f124: addiu $a1, $zero, 6
    func_001752e8();  // 0x175248                                // 0x0015f128: jal 0x175248
    if (v0 != 0) goto label_0x15f150;                           // 0x0015f130: bnez $v0, 0x15f150
    v0 = local_0;                                               // 0x0015f134: lw $v0, 0($sp)
    if (v0 != s1) goto label_0x15f15c;                          // 0x0015f138: bnel $v0, $s1, 0x15f15c
    func_001640c8();  // 0x164070                                // 0x0015f140: jal 0x164070
    goto label_0x15f15c;                                        // 0x0015f148: b 0x15f15c
label_0x15f150:
    func_001640c8();  // 0x164070                                // 0x0015f150: jal 0x164070
label_0x15f15c:
    func_00171e18();  // 0x171d88                                // 0x0015f15c: jal 0x171d88
    /* beqzl $v0, 0x15f1a4 */                                   // 0x0015f164: beqzl $v0, 0x15f1a4
    a0 = s0 + 0x1ec;                                            // 0x0015f168: addiu $a0, $s0, 0x1ec
    func_0015e7e0();  // 0x15e7b0                                // 0x0015f16c: jal 0x15e7b0
    a0 = -0x136;                                                // 0x0015f170: addiu $a0, $zero, -0x136
    v1 = 0x22 << 16;                                            // 0x0015f174: lui $v1, 0x22
    v0 = 1;                                                     // 0x0015f178: addiu $v0, $zero, 1
    if (s2 != v0) goto label_0x15f190;                          // 0x0015f17c: bne $s2, $v0, 0x15f190
    a0 = &str_00227a70;  // "E1122638: mwPlyStartAfs: handle is invalid." // 0x0015f180: addiu $a0, $v1, 0x7a70
    v0 = 0x22 << 16;                                            // 0x0015f184: lui $v0, 0x22
    goto label_0x15f198;                                        // 0x0015f188: b 0x15f198
    a1 = v0 + 0x7a98;                                           // 0x0015f18c: addiu $a1, $v0, 0x7a98
label_0x15f190:
    v0 = 0x22 << 16;                                            // 0x0015f190: lui $v0, 0x22
    a1 = v0 + 0x7aa0;                                           // 0x0015f194: addiu $a1, $v0, 0x7aa0
label_0x15f198:
    func_001634a8();  // 0x163410                                // 0x0015f198: jal 0x163410
    /* nop */                                                   // 0x0015f19c: nop 
    a0 = s0 + 0x1ec;                                            // 0x0015f1a0: addiu $a0, $s0, 0x1ec
    func_00162d98();  // 0x162d38                                // 0x0015f1a4: jal 0x162d38
    *(uint8_t*)((s0) + 0x72) = s2;                              // 0x0015f1ac: sb $s2, 0x72($s0)
label_0x15f1b4:
    return;                                                     // 0x0015f1c4: jr $ra
    sp = sp + 0x40;                                             // 0x0015f1c8: addiu $sp, $sp, 0x40
}