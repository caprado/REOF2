void func_001a98a0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x001a98a0: addiu $sp, $sp, -0x10
    v0 = *(int32_t*)((gp) + -0x63ec);                           // 0x001a98a8: lw $v0, -0x63ec($gp)
    if (v0 != 0) goto label_0x1a98d0;                           // 0x001a98ac: bnez $v0, 0x1a98d0
    at = 0x31 << 16;                                            // 0x001a98b0: lui $at, 0x31
label_0x1a98b4:
    /* nop */                                                   // 0x001a98b4: nop 
    /* nop */                                                   // 0x001a98b8: nop 
    /* nop */                                                   // 0x001a98bc: nop 
    /* nop */                                                   // 0x001a98c0: nop 
    /* nop */                                                   // 0x001a98c4: nop 
    goto label_0x1a98b4;                                        // 0x001a98c8: b 0x1a98b4
    /* nop */                                                   // 0x001a98cc: nop 
label_0x1a98d0:
    v1 = g_00313834;  // Global at 0x00313834                   // 0x001a98d0: lw $v1, 0x3834($at)
    if (v1 != 0) goto label_0x1a98f8;                           // 0x001a98d4: bnez $v1, 0x1a98f8
    /* nop */                                                   // 0x001a98d8: nop 
label_0x1a98dc:
    /* nop */                                                   // 0x001a98dc: nop 
    /* nop */                                                   // 0x001a98e0: nop 
    /* nop */                                                   // 0x001a98e4: nop 
    /* nop */                                                   // 0x001a98e8: nop 
    /* nop */                                                   // 0x001a98ec: nop 
    goto label_0x1a98dc;                                        // 0x001a98f0: b 0x1a98dc
    /* nop */                                                   // 0x001a98f4: nop 
label_0x1a98f8:
    *(uint32_t*)((v0) + 8) = v1;                                // 0x001a98f8: sw $v1, 8($v0)
    a1 = 0x22 << 16;                                            // 0x001a98fc: lui $a1, 0x22
    v0 = *(int32_t*)((gp) + -0x63ec);                           // 0x001a9900: lw $v0, -0x63ec($gp)
    a0 = 0x23 << 16;                                            // 0x001a9904: lui $a0, 0x23
    a1 = a1 + -0x77d0;                                          // 0x001a9908: addiu $a1, $a1, -0x77d0
    v1 = 0x575;                                                 // 0x001a990c: addiu $v1, $zero, 0x575
    a0 = &str_002357e0;  // "rfff/rfff.afs"                     // 0x001a9910: addiu $a0, $a0, 0x57e0
    *(uint32_t*)((v0) + 0x1c) = 0;                              // 0x001a9914: sw $zero, 0x1c($v0)
    v0 = *(int32_t*)((gp) + -0x63ec);                           // 0x001a9918: lw $v0, -0x63ec($gp)
    *(uint32_t*)((v0) + 0xc) = a1;                              // 0x001a991c: sw $a1, 0xc($v0)
    v0 = *(int32_t*)((gp) + -0x63ec);                           // 0x001a9920: lw $v0, -0x63ec($gp)
    *(uint32_t*)((v0) + 0x18) = 0;                              // 0x001a9924: sw $zero, 0x18($v0)
    v0 = *(int32_t*)((gp) + -0x63ec);                           // 0x001a9928: lw $v0, -0x63ec($gp)
    *(uint32_t*)((v0) + 0x14) = v1;                             // 0x001a992c: sw $v1, 0x14($v0)
    a1 = *(int32_t*)((gp) + -0x63ec);                           // 0x001a9930: lw $a1, -0x63ec($gp)
    func_001a94b0();  // 0x1a94a0                                // 0x001a9934: jal 0x1a94a0
    a2 = 0x6000;                                                // 0x001a9938: addiu $a2, $zero, 0x6000
    func_001aaca0();  // 0x1aac80                                // 0x001a993c: jal 0x1aac80
    /* nop */                                                   // 0x001a9940: nop 
    func_001aae40();  // 0x1aadb0                                // 0x001a9944: jal 0x1aadb0
    /* nop */                                                   // 0x001a9948: nop 
    return;                                                     // 0x001a9950: jr $ra
    sp = sp + 0x10;                                             // 0x001a9954: addiu $sp, $sp, 0x10
}