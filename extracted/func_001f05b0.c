void func_001f05b0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_0, local_4, local_8;
    
    sp = sp + -0x30;                                            // 0x001f05b0: addiu $sp, $sp, -0x30
    v0 = s0 & 0xfff;                                            // 0x001f05bc: andi $v0, $s0, 0xfff
    if (v0 != 0) goto label_0x1f05e0;                           // 0x001f05c0: bnez $v0, 0x1f05e0
    v0 = 0xf << 16;                                             // 0x001f05c8: lui $v0, 0xf
    v1 = s0 + -1;                                               // 0x001f05cc: addiu $v1, $s0, -1
    v0 = v0 | 0xfffe;                                           // 0x001f05d0: ori $v0, $v0, 0xfffe
    v0 = ((unsigned)v0 < (unsigned)v1) ? 1 : 0;                 // 0x001f05d4: sltu $v0, $v0, $v1
    if (v0 != 0) goto label_0x1f05e8;                           // 0x001f05d8: bnez $v0, 0x1f05e8
    a0 = 0x7000 << 16;                                          // 0x001f05dc: lui $a0, 0x7000
label_0x1f05e0:
    goto label_0x1f06d0;                                        // 0x001f05e0: b 0x1f06d0
    v0 = -1;                                                    // 0x001f05e4: addiu $v0, $zero, -1
label_0x1f05e8:
    a0 = a0 | 0x4000;                                           // 0x001f05ec: ori $a0, $a0, 0x4000
    a2 = sp | 4;                                                // 0x001f05f0: ori $a2, $sp, 4
    func_00075158();  // BIOS/System - 0x75158                  // 0x001f05f4: jal 0x75158
    a3 = sp | 8;                                                // 0x001f05f8: ori $a3, $sp, 8
    if (a1 >= 0) goto label_0x1f0628;                           // 0x001f0600: bgez $a1, 0x1f0628
    /* nop */                                                   // 0x001f0604: nop 
    if (s0 == 0) goto label_0x1f06d0;                           // 0x001f0608: beqz $s0, 0x1f06d0
    a1 = COP0_REG6;  // Read system control register            // 0x001f0610: mfc0 $a1, $6, 0
    v0 = a1 + 1;                                                // 0x001f0614: addiu $v0, $a1, 1
    COP0_REG6 = v0;  // Write system control register           // 0x001f0618: mtc0 $v0, $6, 0
    /* memory sync */                                           // 0x001f061c: sync 0x10
    goto label_0x1f0670;                                        // 0x001f0620: b 0x1f0670
    /* nop */                                                   // 0x001f0624: nop 
label_0x1f0628:
    if (s0 != 0) goto label_0x1f0670;                           // 0x001f0628: bnez $s0, 0x1f0670
    v0 = a1 + -1;                                               // 0x001f062c: addiu $v0, $a1, -1
    v1 = 0xe001 << 16;                                          // 0x001f0630: lui $v1, 0xe001
    v0 = v0 << 0xd;                                             // 0x001f0634: sll $v0, $v0, 0xd
    a2 = v0 + v1;                                               // 0x001f0638: addu $a2, $v0, $v1
    v0 = COP0_REG6;  // Read system control register            // 0x001f063c: mfc0 $v0, $6, 0
    v0 = v0 + -1;                                               // 0x001f0640: addiu $v0, $v0, -1
    COP0_REG6 = v0;  // Write system control register           // 0x001f0644: mtc0 $v0, $6, 0
    COP0_REG0 = a1;  // Write system control register           // 0x001f0648: mtc0 $a1, $0, 0
    COP0_REG5 = 0;  // Write system control register            // 0x001f064c: mtc0 $zero, $5, 0
    COP0_REG10 = a2;  // Write system control register          // 0x001f0650: mtc0 $a2, $10, 0
    COP0_REG2 = 0;  // Write system control register            // 0x001f0654: mtc0 $zero, $2, 0
    COP0_REG3 = 0;  // Write system control register            // 0x001f0658: mtc0 $zero, $3, 0
    /* memory sync */                                           // 0x001f065c: sync 0x10
    /* tlbwi  */                                                // 0x001f0660: tlbwi 
    /* memory sync */                                           // 0x001f0664: sync 0x10
    goto label_0x1f06d0;                                        // 0x001f0668: b 0x1f06d0
label_0x1f0670:
    v0 = 0xffff << 16;                                          // 0x001f0670: lui $v0, 0xffff
    a0 = s0 + 0x1000;                                           // 0x001f0674: addiu $a0, $s0, 0x1000
    v0 = v0 | 0xf000;                                           // 0x001f0678: ori $v0, $v0, 0xf000
    a2 = 0x7000 << 16;                                          // 0x001f067c: lui $a2, 0x7000
    a0 = a0 & v0;                                               // 0x001f0680: and $a0, $a0, $v0
    local_0 = 0;                                                // 0x001f0684: sw $zero, 0($sp)
    v0 = s0 & v0;                                               // 0x001f0688: and $v0, $s0, $v0
    a0 = (unsigned)a0 >> 6;                                     // 0x001f068c: srl $a0, $a0, 6
    v0 = (unsigned)v0 >> 6;                                     // 0x001f0690: srl $v0, $v0, 6
    a0 = a0 | 0x1f;                                             // 0x001f0694: ori $a0, $a0, 0x1f
    v0 = v0 | 0x1f;                                             // 0x001f0698: ori $v0, $v0, 0x1f
    a2 = a2 | 0x4000;                                           // 0x001f069c: ori $a2, $a2, 0x4000
    local_4 = v0;                                               // 0x001f06a0: sw $v0, 4($sp)
    local_8 = a0;                                               // 0x001f06a4: sw $a0, 8($sp)
    COP0_REG0 = a1;  // Write system control register           // 0x001f06a8: mtc0 $a1, $0, 0
    COP0_REG5 = v1;  // Write system control register           // 0x001f06b0: mtc0 $v1, $5, 0
    COP0_REG10 = a2;  // Write system control register          // 0x001f06b4: mtc0 $a2, $10, 0
    COP0_REG2 = v0;  // Write system control register           // 0x001f06b8: mtc0 $v0, $2, 0
    COP0_REG3 = a0;  // Write system control register           // 0x001f06bc: mtc0 $a0, $3, 0
    /* memory sync */                                           // 0x001f06c0: sync 0x10
    /* tlbwi  */                                                // 0x001f06c4: tlbwi 
    /* memory sync */                                           // 0x001f06c8: sync 0x10
label_0x1f06d0:
    return;                                                     // 0x001f06d8: jr $ra
    sp = sp + 0x30;                                             // 0x001f06dc: addiu $sp, $sp, 0x30
}