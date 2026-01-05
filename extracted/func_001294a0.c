void func_001294a0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x001294a0: addiu $sp, $sp, -0x20
    a3 = -1;                                                    // 0x001294b4: addiu $a3, $zero, -1
    a0 = 5;                                                     // 0x001294b8: addiu $a0, $zero, 5
    func_001281b8();  // 1281b8                                // 0x001294c4: jal 0x1281b8
    t0 = -1;                                                    // 0x001294c8: addiu $t0, $zero, -1
    a0 = 0x22 << 16;                                            // 0x001294cc: lui $a0, 0x22
    if (s0 != 0) goto label_0x1294e8;                           // 0x001294d0: bnez $s0, 0x1294e8
    a0 = &str_002228d8;  // "E9040823:'adxf->stm' is NULL.(ADXF_Stop)" // 0x001294d4: addiu $a0, $a0, 0x28d8
    func_00127d90();  // 127d90                                // 0x001294d8: jal 0x127d90
    /* nop */                                                   // 0x001294dc: nop 
    goto label_0x129578;                                        // 0x001294e0: b 0x129578
    v0 = -3;                                                    // 0x001294e4: addiu $v0, $zero, -3
label_0x1294e8:
    v1 = *(int8_t*)((s0) + 1);                                  // 0x001294e8: lb $v1, 1($s0)
    s1 = 1;                                                     // 0x001294ec: addiu $s1, $zero, 1
    if (v1 == s1) goto label_0x129574;                          // 0x001294f0: beq $v1, $s1, 0x129574
    v0 = 3;                                                     // 0x001294f4: addiu $v0, $zero, 3
    if (v1 != v0) goto label_0x129508;                          // 0x001294f8: bnel $v1, $v0, 0x129508
    a0 = *(int32_t*)((s0) + 4);                                 // 0x001294fc: lw $a0, 4($s0)
    goto label_0x129574;                                        // 0x00129500: b 0x129574
    *(uint8_t*)((s0) + 1) = s1;                                 // 0x00129504: sb $s1, 1($s0)
label_0x129508:
    if (a0 != 0) goto label_0x129528;                           // 0x00129508: bnez $a0, 0x129528
    /* nop */                                                   // 0x0012950c: nop 
    a0 = 0x22 << 16;                                            // 0x00129510: lui $a0, 0x22
    func_00127d90();  // 127d90                                // 0x00129514: jal 0x127d90
    a0 = &str_00222900;  // "E2092301:'adxf' is NULL.(ADXF_StopNw)" // 0x00129518: addiu $a0, $a0, 0x2900
    goto label_0x129578;                                        // 0x0012951c: b 0x129578
    v0 = -1;                                                    // 0x00129520: addiu $v0, $zero, -1
    /* nop */                                                   // 0x00129524: nop 
label_0x129528:
    func_00130408();  // 130408                                // 0x00129528: jal 0x130408
    /* nop */                                                   // 0x0012952c: nop 
    func_001261a0();  // 1261a0                                // 0x00129530: jal 0x1261a0
    /* nop */                                                   // 0x00129534: nop 
    func_001302c8();  // 1302c8                                // 0x00129538: jal 0x1302c8
    a0 = *(int32_t*)((s0) + 4);                                 // 0x0012953c: lw $a0, 4($s0)
    v1 = *(int32_t*)((s0) + 0x14);                              // 0x00129540: lw $v1, 0x14($s0)
    v0 = v0 - v1;                                               // 0x00129548: subu $v0, $v0, $v1
    func_00128fa0();  // 128fa0                                // 0x0012954c: jal 0x128fa0
    *(uint32_t*)((s0) + 0x20) = v0;                             // 0x00129550: sw $v0, 0x20($s0)
    func_001261b8();  // 1261b8                                // 0x00129554: jal 0x1261b8
    *(uint8_t*)((s0) + 1) = s1;                                 // 0x00129558: sb $s1, 1($s0)
    a0 = 5;                                                     // 0x0012955c: addiu $a0, $zero, 5
    a1 = 1;                                                     // 0x00129560: addiu $a1, $zero, 1
    a3 = -1;                                                    // 0x00129568: addiu $a3, $zero, -1
    func_001281b8();  // 1281b8                                // 0x0012956c: jal 0x1281b8
    t0 = -1;                                                    // 0x00129570: addiu $t0, $zero, -1
label_0x129574:
    v0 = *(int32_t*)((s0) + 0x14);                              // 0x00129574: lw $v0, 0x14($s0)
label_0x129578:
    return;                                                     // 0x00129584: jr $ra
    sp = sp + 0x20;                                             // 0x00129588: addiu $sp, $sp, 0x20
}