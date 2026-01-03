void func_00122480() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x30;                                            // 0x00122480: addiu $sp, $sp, -0x30
    s4 = 0x1f << 16;                                            // 0x001224a4: lui $s4, 0x1f
    v1 = s4 + 0x1a18;                                           // 0x001224ac: addiu $v1, $s4, 0x1a18
    v0 = g_001f1a18;  // Global at 0x001f1a18                   // 0x001224b0: lb $v0, 0($v1)
    if (v0 == 0) goto label_0x1224e4;                           // 0x001224b4: beqz $v0, 0x1224e4
    s0 = s0 + 1;                                                // 0x001224bc: addiu $s0, $s0, 1
    v0 = (s0 < 0x10) ? 1 : 0;                                   // 0x001224c0: slti $v0, $s0, 0x10
    if (v0 == 0) goto label_0x1224e4;                           // 0x001224c4: beqz $v0, 0x1224e4
    v1 = v1 + 0x30;                                             // 0x001224c8: addiu $v1, $v1, 0x30
    v0 = g_001f1a48;  // Global at 0x001f1a48                   // 0x001224cc: lb $v0, 0($v1)
    /* nop */                                                   // 0x001224d0: nop 
    /* nop */                                                   // 0x001224d4: nop 
    /* nop */                                                   // 0x001224d8: nop 
    /* bnezl $v0, 0x1224c0 */                                   // 0x001224dc: bnezl $v0, 0x1224c0
    s0 = s0 + 1;                                                // 0x001224e0: addiu $s0, $s0, 1
label_0x1224e4:
    v1 = 0x10;                                                  // 0x001224e4: addiu $v1, $zero, 0x10
    if (s0 == v1) goto label_0x12258c;                          // 0x001224e8: beq $s0, $v1, 0x12258c
    func_001261a0();  // 1261a0                                // 0x001224f0: jal 0x1261a0
    /* nop */                                                   // 0x001224f4: nop 
    v0 = s0 << 1;                                               // 0x001224f8: sll $v0, $s0, 1
    v0 = v0 + s0;                                               // 0x001224fc: addu $v0, $v0, $s0
    v1 = s4 + 0x1a18;                                           // 0x00122500: addiu $v1, $s4, 0x1a18
    v0 = v0 << 4;                                               // 0x00122504: sll $v0, $v0, 4
    s0 = v0 + v1;                                               // 0x0012250c: addu $s0, $v0, $v1
    if (s1 <= 0) goto label_0x122554;                           // 0x00122510: blez $s1, 0x122554
    *(uint8_t*)((s0) + 2) = s1;                                 // 0x00122514: sb $s1, 2($s0)
    t1 = s0 + 0xc;                                              // 0x00122518: addiu $t1, $s0, 0xc
    a3 = s0 + 4;                                                // 0x0012251c: addiu $a3, $s0, 4
label_0x122520:
    v1 = t0 << 2;                                               // 0x00122520: sll $v1, $t0, 2
    t0 = t0 + 1;                                                // 0x00122524: addiu $t0, $t0, 1
    v0 = v1 + s3;                                               // 0x00122528: addu $v0, $v1, $s3
    a2 = v1 + s2;                                               // 0x0012252c: addu $a2, $v1, $s2
    a0 = *(int32_t*)(v0);                                       // 0x00122530: lw $a0, 0($v0)
    a1 = (t0 < s1) ? 1 : 0;                                     // 0x00122534: slt $a1, $t0, $s1
    v1 = t1 + v1;                                               // 0x00122538: addu $v1, $t1, $v1
    *(uint32_t*)((a3) + 0x10) = 0;                              // 0x0012253c: sw $zero, 0x10($a3)
    *(uint32_t*)(a3) = a0;                                      // 0x00122540: sw $a0, 0($a3)
    a3 = a3 + 4;                                                // 0x00122544: addiu $a3, $a3, 4
    v0 = *(int32_t*)(a2);                                       // 0x00122548: lw $v0, 0($a2)
    if (a1 != 0) goto label_0x122520;                           // 0x0012254c: bnez $a1, 0x122520
    g_001f1a18 = v0;  // Global at 0x001f1a18                   // 0x00122550: sw $v0, 0($v1)
label_0x122554:
    at = 0x3dcc << 16;                                          // 0x00122554: lui $at, 0x3dcc
    at = at | 0xcccc;                                           // 0x00122558: ori $at, $at, 0xcccc
    /* move to FPU: $at, $f0 */                                 // 0x0012255c: mtc1 $at, $f0
    v0 = 0 | 0xac44;                                            // 0x00122560: ori $v0, $zero, 0xac44
    v1 = 1;                                                     // 0x00122564: addiu $v1, $zero, 1
    *(uint32_t*)((s0) + 0x20) = v0;                             // 0x00122568: sw $v0, 0x20($s0)
    *(uint32_t*)((s0) + 0x1c) = s1;                             // 0x0012256c: sw $s1, 0x1c($s0)
    *(float*)((s0) + 0x28) = FPU_F0;  // Store float            // 0x00122570: swc1 $f0, 0x28($s0)
    *(uint8_t*)(s0) = v1;                                       // 0x00122574: sb $v1, 0($s0)
    *(uint8_t*)((s0) + 1) = 0;                                  // 0x00122578: sb $zero, 1($s0)
    *(uint32_t*)((s0) + 0x2c) = 0;                              // 0x0012257c: sw $zero, 0x2c($s0)
    func_001261b8();  // 1261b8                                // 0x00122580: jal 0x1261b8
    *(float*)((s0) + 0x24) = FPU_F0;  // Store float            // 0x00122584: swc1 $f0, 0x24($s0)
label_0x12258c:
    return;                                                     // 0x001225a4: jr $ra
    sp = sp + 0x30;                                             // 0x001225a8: addiu $sp, $sp, 0x30
}