void func_001bf890() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x001bf890: addiu $sp, $sp, -0x20
    v0 = 3;                                                     // 0x001bf894: addiu $v0, $zero, 3
    v1 = g_00315e74;  // Global at 0x00315e74                   // 0x001bf8a0: lw $v1, 4($a0)
    if (v1 == v0) goto label_0x1bfa0c;                          // 0x001bf8a4: beq $v1, $v0, 0x1bfa0c
    v0 = 2;                                                     // 0x001bf8ac: addiu $v0, $zero, 2
    if (v1 == v0) goto label_0x1bf968;                          // 0x001bf8b0: beq $v1, $v0, 0x1bf968
    v0 = 1;                                                     // 0x001bf8b4: addiu $v0, $zero, 1
    if (v1 == v0) goto label_0x1bf910;                          // 0x001bf8b8: beq $v1, $v0, 0x1bf910
    /* nop */                                                   // 0x001bf8bc: nop 
    if (v1 == 0) goto label_0x1bf8d0;                           // 0x001bf8c0: beqz $v1, 0x1bf8d0
    /* nop */                                                   // 0x001bf8c4: nop 
    goto label_0x1bfa44;                                        // 0x001bf8c8: b 0x1bfa44
    v0 = -1;                                                    // 0x001bf8cc: addiu $v0, $zero, -1
label_0x1bf8d0:
    func_001bf010();  // 0x1befe0                                // 0x001bf8d0: jal 0x1befe0
    /* nop */                                                   // 0x001bf8d4: nop 
    if (v0 < 0) goto label_0x1bfa40;                            // 0x001bf8d8: bltz $v0, 0x1bfa40
    /* nop */                                                   // 0x001bf8dc: nop 
    v0 = *(int32_t*)((s0) + 0xc0);                              // 0x001bf8e0: lw $v0, 0xc0($s0)
    if (v0 == 0) goto label_0x1bf9b8;                           // 0x001bf8e4: beqz $v0, 0x1bf9b8
    /* nop */                                                   // 0x001bf8e8: nop 
label_0x1bf8ec:
    a0 = 0x31 << 16;                                            // 0x001bf8ec: lui $a0, 0x31
    a1 = 0x24 << 16;                                            // 0x001bf8f0: lui $a1, 0x24
    a0 = a0 + 0x5e70;                                           // 0x001bf8f4: addiu $a0, $a0, 0x5e70
    a1 = a1 + -0x1e88;                                          // 0x001bf8f8: addiu $a1, $a1, -0x1e88
    func_0010a570();  // 0x10a4d8                                // 0x001bf8fc: jal 0x10a4d8
    a2 = s0 + 0x72;                                             // 0x001bf900: addiu $a2, $s0, 0x72
    v0 = *(int32_t*)((s0) + 4);                                 // 0x001bf904: lw $v0, 4($s0)
    v0 = v0 + 1;                                                // 0x001bf908: addiu $v0, $v0, 1
    *(uint32_t*)((s0) + 4) = v0;                                // 0x001bf90c: sw $v0, 4($s0)
label_0x1bf910:
    v1 = *(int32_t*)((s0) + 0x14);                              // 0x001bf910: lw $v1, 0x14($s0)
    a1 = 0x31 << 16;                                            // 0x001bf914: lui $a1, 0x31
    t0 = 0x31 << 16;                                            // 0x001bf918: lui $t0, 0x31
    v0 = gp + -0x6300;                                          // 0x001bf91c: addiu $v0, $gp, -0x6300
    a1 = a1 + 0x5e70;                                           // 0x001bf920: addiu $a1, $a1, 0x5e70
    a3 = 1;                                                     // 0x001bf928: addiu $a3, $zero, 1
    t0 = t0 + 0x5e20;                                           // 0x001bf92c: addiu $t0, $t0, 0x5e20
    v1 = v1 << 2;                                               // 0x001bf930: sll $v1, $v1, 2
    v0 = v0 + v1;                                               // 0x001bf934: addu $v0, $v0, $v1
    a0 = *(int32_t*)(v0);                                       // 0x001bf938: lw $a0, 0($v0)
    func_00181618();  // 0x1814e8                                // 0x001bf93c: jal 0x1814e8
    t1 = s0 + 0xc;                                              // 0x001bf940: addiu $t1, $s0, 0xc
    if (v0 >= 0) goto label_0x1bf958;                           // 0x001bf944: bgez $v0, 0x1bf958
    /* nop */                                                   // 0x001bf948: nop 
label_0x1bf94c:
    *(uint32_t*)((s0) + 4) = 0;                                 // 0x001bf94c: sw $zero, 4($s0)
    goto label_0x1bfa44;                                        // 0x001bf950: b 0x1bfa44
    v0 = 1;                                                     // 0x001bf954: addiu $v0, $zero, 1
label_0x1bf958:
    v0 = *(int32_t*)((s0) + 4);                                 // 0x001bf958: lw $v0, 4($s0)
    v0 = v0 + 1;                                                // 0x001bf95c: addiu $v0, $v0, 1
    goto label_0x1bfa40;                                        // 0x001bf960: b 0x1bfa40
    *(uint32_t*)((s0) + 4) = v0;                                // 0x001bf964: sw $v0, 4($s0)
label_0x1bf968:
    func_001bf010();  // 0x1befe0                                // 0x001bf968: jal 0x1befe0
    /* nop */                                                   // 0x001bf96c: nop 
    if (v0 < 0) goto label_0x1bfa40;                            // 0x001bf970: bltz $v0, 0x1bfa40
    /* nop */                                                   // 0x001bf974: nop 
    v0 = *(int32_t*)((s0) + 0x1c);                              // 0x001bf978: lw $v0, 0x1c($s0)
    if (v0 < 0) goto label_0x1bf94c;                            // 0x001bf97c: bltz $v0, 0x1bf94c
    /* nop */                                                   // 0x001bf980: nop 
    v0 = *(int32_t*)((s0) + 0xc);                               // 0x001bf984: lw $v0, 0xc($s0)
    if (v0 <= 0) goto label_0x1bf9b8;                           // 0x001bf988: blez $v0, 0x1bf9b8
    /* nop */                                                   // 0x001bf98c: nop 
    a0 = 0x31 << 16;                                            // 0x001bf990: lui $a0, 0x31
    a1 = 0x24 << 16;                                            // 0x001bf994: lui $a1, 0x24
    a3 = 0x31 << 16;                                            // 0x001bf998: lui $a3, 0x31
    a0 = a0 + 0x5e70;                                           // 0x001bf99c: addiu $a0, $a0, 0x5e70
    a1 = &str_0023e180;  // "rom0:ROMVER"                       // 0x001bf9a0: addiu $a1, $a1, -0x1e80
    a2 = s0 + 0x72;                                             // 0x001bf9a4: addiu $a2, $s0, 0x72
    func_0010a570();  // 0x10a4d8                                // 0x001bf9a8: jal 0x10a4d8
    a3 = a3 + 0x5e38;                                           // 0x001bf9ac: addiu $a3, $a3, 0x5e38
    goto label_0x1bf9d8;                                        // 0x001bf9b0: b 0x1bf9d8
    *(uint32_t*)((s0) + 0xc4) = 0;                              // 0x001bf9b4: sw $zero, 0xc4($s0)
label_0x1bf9b8:
    a0 = 0x31 << 16;                                            // 0x001bf9b8: lui $a0, 0x31
    a1 = 0x24 << 16;                                            // 0x001bf9bc: lui $a1, 0x24
    a0 = a0 + 0x5e70;                                           // 0x001bf9c0: addiu $a0, $a0, 0x5e70
    a1 = a1 + -0x1e78;                                          // 0x001bf9c4: addiu $a1, $a1, -0x1e78
    func_0010a570();  // 0x10a4d8                                // 0x001bf9c8: jal 0x10a4d8
    a2 = s0 + 0x72;                                             // 0x001bf9cc: addiu $a2, $s0, 0x72
    v0 = 1;                                                     // 0x001bf9d0: addiu $v0, $zero, 1
    *(uint32_t*)((s0) + 0xc4) = v0;                             // 0x001bf9d4: sw $v0, 0xc4($s0)
label_0x1bf9d8:
    v1 = *(int32_t*)((s0) + 0x14);                              // 0x001bf9d8: lw $v1, 0x14($s0)
    a1 = 0x31 << 16;                                            // 0x001bf9dc: lui $a1, 0x31
    v0 = gp + -0x6300;                                          // 0x001bf9e0: addiu $v0, $gp, -0x6300
    v1 = v1 << 2;                                               // 0x001bf9e4: sll $v1, $v1, 2
    v0 = v0 + v1;                                               // 0x001bf9e8: addu $v0, $v0, $v1
    a0 = *(int32_t*)(v0);                                       // 0x001bf9ec: lw $a0, 0($v0)
    func_001814e8();  // 0x181400                                // 0x001bf9f0: jal 0x181400
    a1 = a1 + 0x5e70;                                           // 0x001bf9f4: addiu $a1, $a1, 0x5e70
    if (v0 < 0) goto label_0x1bf94c;                            // 0x001bf9f8: bltz $v0, 0x1bf94c
    /* nop */                                                   // 0x001bf9fc: nop 
    v0 = 3;                                                     // 0x001bfa00: addiu $v0, $zero, 3
    goto label_0x1bfa40;                                        // 0x001bfa04: b 0x1bfa40
    *(uint32_t*)((s0) + 4) = v0;                                // 0x001bfa08: sw $v0, 4($s0)
label_0x1bfa0c:
    func_001bf010();  // 0x1befe0                                // 0x001bfa0c: jal 0x1befe0
    /* nop */                                                   // 0x001bfa10: nop 
    if (v0 < 0) goto label_0x1bfa40;                            // 0x001bfa14: bltz $v0, 0x1bfa40
    /* nop */                                                   // 0x001bfa18: nop 
    v0 = *(int32_t*)((s0) + 0x1c);                              // 0x001bfa1c: lw $v0, 0x1c($s0)
    if (v0 < 0) goto label_0x1bf94c;                            // 0x001bfa20: bltz $v0, 0x1bf94c
    /* nop */                                                   // 0x001bfa24: nop 
    *(uint32_t*)((s0) + 4) = 0;                                 // 0x001bfa28: sw $zero, 4($s0)
    v0 = *(int32_t*)((s0) + 0xc4);                              // 0x001bfa2c: lw $v0, 0xc4($s0)
    if (v0 == 0) goto label_0x1bf8ec;                           // 0x001bfa30: beqz $v0, 0x1bf8ec
    /* nop */                                                   // 0x001bfa34: nop 
    goto label_0x1bfa44;                                        // 0x001bfa38: b 0x1bfa44
label_0x1bfa40:
    v0 = -1;                                                    // 0x001bfa40: addiu $v0, $zero, -1
label_0x1bfa44:
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001bfa48: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001bfa4c: jr $ra
    sp = sp + 0x20;                                             // 0x001bfa50: addiu $sp, $sp, 0x20
}