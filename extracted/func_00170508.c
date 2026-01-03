void func_00170508() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x60;                                            // 0x00170508: addiu $sp, $sp, -0x60
    func_00169b88();  // 169b88                                // 0x00170540: jal 0x169b88
    v0 = *(int32_t*)((s4) + 0x1b30);                            // 0x00170548: lw $v0, 0x1b30($s4)
    v1 = *(int32_t*)((v0) + 0x138);                             // 0x0017054c: lw $v1, 0x138($v0)
    if (v1 <= 0) goto label_0x1705c0;                           // 0x00170550: blez $v1, 0x1705c0
    s0 = v0 + 0x13c;                                            // 0x00170554: addiu $s0, $v0, 0x13c
    s7 = 2;                                                     // 0x0017055c: addiu $s7, $zero, 2
    s6 = 4;                                                     // 0x00170560: addiu $s6, $zero, 4
    /* nop */                                                   // 0x00170564: nop 
label_0x170568:
    v0 = *(int32_t*)(s0);                                       // 0x00170568: lw $v0, 0($s0)
    if (v0 == s7) goto label_0x170580;                          // 0x0017056c: beq $v0, $s7, 0x170580
    if (v0 != s6) goto label_0x1705b8;                          // 0x00170574: bnel $v0, $s6, 0x1705b8
    s1 = s1 + -1;                                               // 0x00170578: addiu $s1, $s1, -1
label_0x170580:
    func_00170640();  // 170640                                // 0x00170580: jal 0x170640
    s5 = s5 + 1;                                                // 0x0017058c: addiu $s5, $s5, 1
    if (v0 == 0) goto label_0x1705a8;                           // 0x00170590: beqz $v0, 0x1705a8
    goto label_0x1705b4;                                        // 0x0017059c: b 0x1705b4
    /* nop */                                                   // 0x001705a4: nop 
label_0x1705a8:
    func_00170640();  // 170640                                // 0x001705a8: jal 0x170640
    /* nop */                                                   // 0x001705ac: nop 
    if (v0 != 0) s2 = s0;                                       // 0x001705b0: movn $s2, $s0, $v0
label_0x1705b4:
    s1 = s1 + -1;                                               // 0x001705b4: addiu $s1, $s1, -1
label_0x1705b8:
    if (s1 != 0) goto label_0x170568;                           // 0x001705b8: bnez $s1, 0x170568
    s0 = s0 + 0x80;                                             // 0x001705bc: addiu $s0, $s0, 0x80
label_0x1705c0:
    v1 = *(int32_t*)((s4) + 0x48);                              // 0x001705c0: lw $v1, 0x48($s4)
    v0 = 4;                                                     // 0x001705c4: addiu $v0, $zero, 4
    if (v1 != v0) goto label_0x170604;                          // 0x001705c8: bne $v1, $v0, 0x170604
    v0 = (s5 < 2) ? 1 : 0;                                      // 0x001705d0: slti $v0, $s5, 2
    if (v0 != 0) goto label_0x170604;                           // 0x001705d4: bnez $v0, 0x170604
    /* nop */                                                   // 0x001705d8: nop 
    func_001752e8();  // 1752e8                                // 0x001705e0: jal 0x1752e8
    a1 = 0xf;                                                   // 0x001705e4: addiu $a1, $zero, 0xf
    if (v0 == 0) goto label_0x170604;                           // 0x001705e8: beqz $v0, 0x170604
    s0 = 1;                                                     // 0x001705ec: addiu $s0, $zero, 1
    a2 = *(int32_t*)((s2) + 0x10);                              // 0x001705f0: lw $a2, 0x10($s2)
    func_00176c28();  // 176c28                                // 0x001705f8: jal 0x176c28
    a1 = *(int32_t*)((s2) + 0xc);                               // 0x001705fc: lw $a1, 0xc($s2)
    s0 = ((unsigned)0 < (unsigned)v0) ? 1 : 0;                  // 0x00170600: sltu $s0, $zero, $v0
label_0x170604:
    func_00169ba0();  // 169ba0                                // 0x00170604: jal 0x169ba0
    return;                                                     // 0x00170634: jr $ra
    sp = sp + 0x60;                                             // 0x00170638: addiu $sp, $sp, 0x60
}