void func_0017acd0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_0, local_10, local_14, local_18, local_1c, local_4, local_8;
    
    sp = sp + -0x30;                                            // 0x0017acd0: addiu $sp, $sp, -0x30
    *(uint32_t*)((s0) + 0x44) = t1;                             // 0x0017acfc: sw $t1, 0x44($s0)
    func_0017d288();  // 0x17d200                                // 0x0017ad04: jal 0x17d200
    *(uint32_t*)((s0) + 0x48) = t2;                             // 0x0017ad08: sw $t2, 0x48($s0)
    func_0017cf18();  // 0x17cf10                                // 0x0017ad0c: jal 0x17cf10
    a1 = 0x11;                                                  // 0x0017ad18: addiu $a1, $zero, 0x11
    func_0017cf10();  // 0x17cf08                                // 0x0017ad1c: jal 0x17cf08
    func_0017a6f0();  // 0x17a5d8                                // 0x0017ad2c: jal 0x17a5d8
    return func_0017cf10();  // Tail call                        // 0x0017ad50: j 0x17cf08
    sp = sp + 0x30;                                             // 0x0017ad54: addiu $sp, $sp, 0x30
    sp = sp + -0x20;                                            // 0x0017ad58: addiu $sp, $sp, -0x20
    v0 = 0x41;                                                  // 0x0017ad5c: addiu $v0, $zero, 0x41
    v1 = *(int32_t*)((s0) + 4);                                 // 0x0017ad78: lw $v1, 4($s0)
    if (v1 == v0) goto label_0x17aec0;                          // 0x0017ad7c: beq $v1, $v0, 0x17aec0
    v0 = (v1 < 0x42) ? 1 : 0;                                   // 0x0017ad84: slti $v0, $v1, 0x42
    if (v0 == 0) goto label_0x17adc8;                           // 0x0017ad88: beqz $v0, 0x17adc8
    v0 = 0x101;                                                 // 0x0017ad8c: addiu $v0, $zero, 0x101
    v0 = 0x21;                                                  // 0x0017ad90: addiu $v0, $zero, 0x21
    if (v1 == v0) goto label_0x17aef0;                          // 0x0017ad94: beq $v1, $v0, 0x17aef0
    v0 = (v1 < 0x22) ? 1 : 0;                                   // 0x0017ad98: slti $v0, $v1, 0x22
    if (v0 == 0) goto label_0x17adb8;                           // 0x0017ad9c: beqz $v0, 0x17adb8
    v0 = 0x31;                                                  // 0x0017ada0: addiu $v0, $zero, 0x31
    v0 = 0x11;                                                  // 0x0017ada4: addiu $v0, $zero, 0x11
    if (v1 == v0) goto label_0x17adf0;                          // 0x0017ada8: beq $v1, $v0, 0x17adf0
    /* nop */                                                   // 0x0017adac: nop 
    goto label_0x17af24;                                        // 0x0017adb0: b 0x17af24
label_0x17adb8:
    if (v1 == v0) goto label_0x17ae90;                          // 0x0017adb8: beq $v1, $v0, 0x17ae90
    /* nop */                                                   // 0x0017adbc: nop 
    goto label_0x17af24;                                        // 0x0017adc0: b 0x17af24
label_0x17adc8:
    if (v1 == v0) goto label_0x17af20;                          // 0x0017adc8: beq $v1, $v0, 0x17af20
    v0 = (v1 < 0x102) ? 1 : 0;                                  // 0x0017adcc: slti $v0, $v1, 0x102
    /* bnezl $v0, 0x17af24 */                                   // 0x0017add0: bnezl $v0, 0x17af24
    v0 = 0x1001;                                                // 0x0017add8: addiu $v0, $zero, 0x1001
    if (v1 == v0) goto label_0x17ae60;                          // 0x0017addc: beq $v1, $v0, 0x17ae60
    /* nop */                                                   // 0x0017ade0: nop 
    goto label_0x17af24;                                        // 0x0017ade4: b 0x17af24
    /* nop */                                                   // 0x0017adec: nop 
label_0x17adf0:
    func_0017d200();  // 0x17d128                                // 0x0017adf0: jal 0x17d128
    /* nop */                                                   // 0x0017adf4: nop 
    v1 = 1;                                                     // 0x0017adf8: addiu $v1, $zero, 1
    if (v0 == v1) goto label_0x17ae28;                          // 0x0017adfc: beq $v0, $v1, 0x17ae28
    goto label_0x17af48;                                        // 0x0017ae20: j 0x17af48
    sp = sp + 0x20;                                             // 0x0017ae24: addiu $sp, $sp, 0x20
label_0x17ae28:
    func_0017c3c8();  // 0x17c250                                // 0x0017ae2c: jal 0x17c250
    a2 = 0x15;                                                  // 0x0017ae30: addiu $a2, $zero, 0x15
    a3 = 1;                                                     // 0x0017ae4c: addiu $a3, $zero, 1
    goto label_0x17af48;                                        // 0x0017ae54: j 0x17af48
    sp = sp + 0x20;                                             // 0x0017ae58: addiu $sp, $sp, 0x20
    /* nop */                                                   // 0x0017ae5c: nop 
label_0x17ae60:
    func_0017c3c8();  // 0x17c250                                // 0x0017ae60: jal 0x17c250
    a2 = 0x15;                                                  // 0x0017ae64: addiu $a2, $zero, 0x15
    a3 = 1;                                                     // 0x0017ae80: addiu $a3, $zero, 1
    goto label_0x17af48;                                        // 0x0017ae88: j 0x17af48
    sp = sp + 0x20;                                             // 0x0017ae8c: addiu $sp, $sp, 0x20
label_0x17ae90:
    func_0017c3c8();  // 0x17c250                                // 0x0017ae90: jal 0x17c250
    a2 = 2;                                                     // 0x0017ae94: addiu $a2, $zero, 2
    a3 = 1;                                                     // 0x0017aeb0: addiu $a3, $zero, 1
    goto label_0x17af48;                                        // 0x0017aeb8: j 0x17af48
    sp = sp + 0x20;                                             // 0x0017aebc: addiu $sp, $sp, 0x20
label_0x17aec0:
    func_0017c3c8();  // 0x17c250                                // 0x0017aec0: jal 0x17c250
    a2 = 3;                                                     // 0x0017aec4: addiu $a2, $zero, 3
    a3 = 1;                                                     // 0x0017aee0: addiu $a3, $zero, 1
    goto label_0x17af48;                                        // 0x0017aee8: j 0x17af48
    sp = sp + 0x20;                                             // 0x0017aeec: addiu $sp, $sp, 0x20
label_0x17aef0:
    func_0017c3c8();  // 0x17c250                                // 0x0017aef0: jal 0x17c250
    a2 = 1;                                                     // 0x0017aef4: addiu $a2, $zero, 1
    return func_0017b120();  // Tail call                        // 0x0017af14: j 0x17b020
    sp = sp + 0x20;                                             // 0x0017af18: addiu $sp, $sp, 0x20
    /* nop */                                                   // 0x0017af1c: nop 
label_0x17af20:
label_0x17af24:
    a2 = 0x23 << 16;                                            // 0x0017af30: lui $a2, 0x23
    a2 = &str_002296f0;  // "E201312: sfxcnv_IsCnvUpHalf : compo is invalid." // 0x0017af3c: addiu $a2, $a2, -0x6910
    return func_0017cec8();  // Tail call                        // 0x0017af40: j 0x17ce88
    sp = sp + 0x20;                                             // 0x0017af44: addiu $sp, $sp, 0x20
label_0x17af48:
    sp = sp + -0x60;                                            // 0x0017af48: addiu $sp, $sp, -0x60
    s1 = s0 + 4;                                                // 0x0017af58: addiu $s1, $s0, 4
    local_10 = a2;                                              // 0x0017af70: sw $a2, 0x10($sp)
    a1 = *(int32_t*)((s0) + 0x44);                              // 0x0017af74: lw $a1, 0x44($s0)
    v0 = *(int32_t*)((s0) + 0x48);                              // 0x0017af78: lw $v0, 0x48($s0)
    v1 = *(int32_t*)(s1);                                       // 0x0017af7c: lw $v1, 0($s1)
    local_14 = a1;                                              // 0x0017af80: sw $a1, 0x14($sp)
    local_0 = v1;                                               // 0x0017af84: sw $v1, 0($sp)
    local_4 = a1;                                               // 0x0017af88: sw $a1, 4($sp)
    func_0017ab20();  // 0x17aa68                                // 0x0017af8c: jal 0x17aa68
    local_8 = v0;                                               // 0x0017af90: sw $v0, 8($sp)
    v1 = 1;                                                     // 0x0017af94: addiu $v1, $zero, 1
    a1 = sp + 0x10;                                             // 0x0017af9c: addiu $a1, $sp, 0x10
    if (v0 != v1) goto label_0x17afc0;                          // 0x0017afa0: bne $v0, $v1, 0x17afc0
    a2 = 1;                                                     // 0x0017afa4: addiu $a2, $zero, 1
    v0 = *(int32_t*)((s0) + 0x48);                              // 0x0017afa8: lw $v0, 0x48($s0)
    v1 = (unsigned)v0 >> 0x1f;                                  // 0x0017afac: srl $v1, $v0, 0x1f
    v0 = v0 + v1;                                               // 0x0017afb0: addu $v0, $v0, $v1
    goto label_0x17afc4;                                        // 0x0017afb4: b 0x17afc4
    v0 = v0 >> 1;                                               // 0x0017afb8: sra $v0, $v0, 1
    /* nop */                                                   // 0x0017afbc: nop 
label_0x17afc0:
    v0 = *(int32_t*)((s0) + 0x48);                              // 0x0017afc0: lw $v0, 0x48($s0)
label_0x17afc4:
    local_18 = v0;                                              // 0x0017afc4: sw $v0, 0x18($sp)
    v0 = *(int32_t*)((s2) + 8);                                 // 0x0017afc8: lw $v0, 8($s2)
    if (v0 != 0) goto label_0x17afdc;                           // 0x0017afcc: bnez $v0, 0x17afdc
    /* nop */                                                   // 0x0017afd0: nop 
    v0 = *(int32_t*)((s1) + 4);                                 // 0x0017afd4: lw $v0, 4($s1)
    v0 = v0 << 2;                                               // 0x0017afd8: sll $v0, $v0, 2
label_0x17afdc:
    if (s3 != a2) goto label_0x17aff8;                          // 0x0017afdc: bne $s3, $a2, 0x17aff8
    local_1c = v0;                                              // 0x0017afe0: sw $v0, 0x1c($sp)
    func_0014f5c8();  // 0x14f4a8                                // 0x0017afe4: jal 0x14f4a8
    a2 = *(int32_t*)((s2) + 0x3c);                              // 0x0017afe8: lw $a2, 0x3c($s2)
    goto label_0x17b008;                                        // 0x0017afec: b 0x17b008
    /* nop */                                                   // 0x0017aff4: nop 
label_0x17aff8:
    func_0014f4a8();  // 0x14f488                                // 0x0017affc: jal 0x14f488
    a1 = sp + 0x10;                                             // 0x0017b000: addiu $a1, $sp, 0x10
label_0x17b008:
    return;                                                     // 0x0017b018: jr $ra
    sp = sp + 0x60;                                             // 0x0017b01c: addiu $sp, $sp, 0x60
}