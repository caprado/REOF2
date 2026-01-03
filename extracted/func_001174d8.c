void func_001174d8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_4, local_8;
    
    sp = sp + -0x70;                                            // 0x001174d8: addiu $sp, $sp, -0x70
    a0 = 0x25 << 16;                                            // 0x001174ec: lui $a0, 0x25
    *(uint32_t*)((s1) + 0x10) = 0;                              // 0x00117500: sw $zero, 0x10($s1)
    a0 = a0 + -0x1ec0;                                          // 0x00117504: addiu $a0, $a0, -0x1ec0
    func_00116f08();  // 116f08                                // 0x00117508: jal 0x116f08
    *(uint32_t*)((s1) + 0x24) = 0;                              // 0x0011750c: sw $zero, 0x24($s1)
    if (s0 == 0) goto label_0x1175fc;                           // 0x00117514: beqz $s0, 0x1175fc
    v0 = -1;                                                    // 0x00117518: addiu $v0, $zero, -1
    v0 = *(int32_t*)((s0) + 0x18);                              // 0x0011751c: lw $v0, 0x18($s0)
    v1 = s2 & 1;                                                // 0x00117520: andi $v1, $s2, 1
    *(uint32_t*)(s1) = s0;                                      // 0x00117524: sw $s0, 0($s1)
    *(uint32_t*)((s1) + 4) = v0;                                // 0x00117528: sw $v0, 4($s1)
    *(uint32_t*)((s0) + 0x20) = s3;                             // 0x0011752c: sw $s3, 0x20($s0)
    *(uint32_t*)((s0) + 0x14) = s0;                             // 0x00117530: sw $s0, 0x14($s0)
    if (v1 != 0) goto label_0x1175c0;                           // 0x00117534: bnez $v1, 0x1175c0
    *(uint32_t*)((s0) + 0x1c) = s1;                             // 0x00117538: sw $s1, 0x1c($s0)
    v0 = 1;                                                     // 0x0011753c: addiu $v0, $zero, 1
    local_8 = 0;                                                // 0x00117540: sw $zero, 8($sp)
    local_4 = v0;                                               // 0x00117544: sw $v0, 4($sp)
    DeleteSema();  // 0x1142e0                                  // 0x00117548: jal 0x1142e0
    if (v0 >= 0) goto label_0x117568;                           // 0x00117550: bgez $v0, 0x117568
    *(uint32_t*)((s1) + 8) = v0;                                // 0x00117554: sw $v0, 8($s1)
    func_00116fb0();  // 116fb0                                // 0x00117558: jal 0x116fb0
    goto label_0x1175fc;                                        // 0x00117560: b 0x1175fc
    v0 = -3;                                                    // 0x00117564: addiu $v0, $zero, -3
label_0x117568:
    a0 = 0x8000 << 16;                                          // 0x00117568: lui $a0, 0x8000
    a0 = a0 | 9;                                                // 0x00117570: ori $a0, $a0, 9
    a2 = 0x40;                                                  // 0x00117574: addiu $a2, $zero, 0x40
    func_00116ac8();  // 116ac8                                // 0x00117580: jal 0x116ac8
    if (v0 != 0) goto label_0x1175a8;                           // 0x00117588: bnez $v0, 0x1175a8
    /* nop */                                                   // 0x0011758c: nop 
    func_00116fb0();  // 116fb0                                // 0x00117590: jal 0x116fb0
    SignalSema();  // 0x1142f0                                  // 0x00117598: jal 0x1142f0
    a0 = *(int32_t*)((s1) + 8);                                 // 0x0011759c: lw $a0, 8($s1)
    goto label_0x1175fc;                                        // 0x001175a0: b 0x1175fc
    v0 = -2;                                                    // 0x001175a4: addiu $v0, $zero, -2
label_0x1175a8:
    PollSema();  // 0x114320                                    // 0x001175a8: jal 0x114320
    a0 = *(int32_t*)((s1) + 8);                                 // 0x001175ac: lw $a0, 8($s1)
    SignalSema();  // 0x1142f0                                  // 0x001175b0: jal 0x1142f0
    a0 = *(int32_t*)((s1) + 8);                                 // 0x001175b4: lw $a0, 8($s1)
    goto label_0x1175fc;                                        // 0x001175b8: b 0x1175fc
label_0x1175c0:
    v0 = -1;                                                    // 0x001175c0: addiu $v0, $zero, -1
    a0 = 0x8000 << 16;                                          // 0x001175c4: lui $a0, 0x8000
    *(uint32_t*)((s1) + 8) = v0;                                // 0x001175c8: sw $v0, 8($s1)
    a0 = a0 | 9;                                                // 0x001175cc: ori $a0, $a0, 9
    a2 = 0x40;                                                  // 0x001175d4: addiu $a2, $zero, 0x40
    func_00116ac8();  // 116ac8                                // 0x001175e0: jal 0x116ac8
    if (v0 != 0) goto label_0x1175fc;                           // 0x001175e8: bnez $v0, 0x1175fc
    func_00116fb0();  // 116fb0                                // 0x001175f0: jal 0x116fb0
    v0 = -2;                                                    // 0x001175f8: addiu $v0, $zero, -2
label_0x1175fc:
    return;                                                     // 0x00117610: jr $ra
    sp = sp + 0x70;                                             // 0x00117614: addiu $sp, $sp, 0x70
}