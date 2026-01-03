void func_0011ef98() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x80;                                            // 0x0011ef98: addiu $sp, $sp, -0x80
    if (s4 != 0) goto label_0x11efd8;                           // 0x0011efc4: bnez $s4, 0x11efd8
    v0 = 0x8000 << 16;                                          // 0x0011efcc: lui $v0, 0x8000
    goto label_0x11f09c;                                        // 0x0011efd0: b 0x11f09c
    v0 = v0 | 0x16;                                             // 0x0011efd4: ori $v0, $v0, 0x16
label_0x11efd8:
    func_0011d320();  // 11d320                                // 0x0011efd8: jal 0x11d320
    s2 = 0x25 << 16;                                            // 0x0011efdc: lui $s2, 0x25
    s0 = g_00253480;  // Global at 0x00253480                   // 0x0011efe0: lw $s0, 0x3480($s2)
    if (s0 == 0) goto label_0x11eff4;                           // 0x0011efe4: beqz $s0, 0x11eff4
    v0 = *(int32_t*)(s0);                                       // 0x0011efec: lw $v0, 0($s0)
    g_00253480 = v0;  // Global at 0x00253480                   // 0x0011eff0: sw $v0, 0x3480($s2)
label_0x11eff4:
    if (s0 != 0) goto label_0x11f018;                           // 0x0011eff4: bnez $s0, 0x11f018
    /* nop */                                                   // 0x0011eff8: nop 
    if (s3 == 0) goto label_0x11f00c;                           // 0x0011effc: beqz $s3, 0x11f00c
    /* nop */                                                   // 0x0011f000: nop 
    func_0011d378();  // 11d378                                // 0x0011f004: jal 0x11d378
    /* nop */                                                   // 0x0011f008: nop 
label_0x11f00c:
    v0 = 0x8000 << 16;                                          // 0x0011f00c: lui $v0, 0x8000
    goto label_0x11f09c;                                        // 0x0011f010: b 0x11f09c
    v0 = v0 | 0x8005;                                           // 0x0011f014: ori $v0, $v0, 0x8005
label_0x11f018:
    func_0011e5a0();  // 11e5a0                                // 0x0011f018: jal 0x11e5a0
    /* nop */                                                   // 0x0011f01c: nop 
    if (s1 >= 0) goto label_0x11f054;                           // 0x0011f024: bgezl $s1, 0x11f054
    *(uint32_t*)((s0) + 8) = s4;                                // 0x0011f028: sw $s4, 8($s0)
    v0 = g_00253480;  // Global at 0x00253480                   // 0x0011f02c: lw $v0, 0x3480($s2)
    g_00253480 = s0;  // Global at 0x00253480                   // 0x0011f030: sw $s0, 0x3480($s2)
    *(uint32_t*)(s0) = v0;                                      // 0x0011f034: sw $v0, 0($s0)
    *(uint32_t*)((s0) + 4) = 0;                                 // 0x0011f038: sw $zero, 4($s0)
    if (s3 == 0) goto label_0x11f09c;                           // 0x0011f03c: beqz $s3, 0x11f09c
    func_0011d378();  // 11d378                                // 0x0011f044: jal 0x11d378
    /* nop */                                                   // 0x0011f048: nop 
    goto label_0x11f09c;                                        // 0x0011f04c: b 0x11f09c
label_0x11f054:
    a2 = 0x12 << 16;                                            // 0x0011f054: lui $a2, 0x12
    *(uint32_t*)((s0) + 0xc) = s5;                              // 0x0011f058: sw $s5, 0xc($s0)
    a2 = a2 + -0x10c8;                                          // 0x0011f05c: addiu $a2, $a2, -0x10c8
    *(uint32_t*)((s0) + 4) = s1;                                // 0x0011f060: sw $s1, 4($s0)
    func_0011ecc0();  // 11ecc0                                // 0x0011f06c: jal 0x11ecc0
    func_0011e838();  // 11e838                                // 0x0011f074: jal 0x11e838
    if (s3 == 0) goto label_0x11f090;                           // 0x0011f07c: beqz $s3, 0x11f090
    v0 = s0 << 4;                                               // 0x0011f080: sll $v0, $s0, 4
    func_0011d378();  // 11d378                                // 0x0011f084: jal 0x11d378
    /* nop */                                                   // 0x0011f088: nop 
    v0 = s0 << 4;                                               // 0x0011f08c: sll $v0, $s0, 4
label_0x11f090:
    v1 = s1 & 0xfe;                                             // 0x0011f090: andi $v1, $s1, 0xfe
    v0 = v0 | v1;                                               // 0x0011f094: or $v0, $v0, $v1
    v0 = v0 | 1;                                                // 0x0011f098: ori $v0, $v0, 1
label_0x11f09c:
    return;                                                     // 0x0011f0bc: jr $ra
    sp = sp + 0x80;                                             // 0x0011f0c0: addiu $sp, $sp, 0x80
}