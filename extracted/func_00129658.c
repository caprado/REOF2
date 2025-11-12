void func_00129658() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x00129658: addiu $sp, $sp, -0x20
    v1 = 2;                                                     // 0x0012965c: addiu $v1, $zero, 2
    v0 = *(int8_t*)((s0) + 1);                                  // 0x00129674: lb $v0, 1($s0)
    if (v0 != v1) goto label_0x1296c4;                          // 0x00129678: bnel $v0, $v1, 0x1296c4
    s1 = *(int8_t*)((s0) + 3);                                  // 0x0012967c: lb $s1, 3($s0)
    func_00130280();  // 0x130278                                // 0x00129680: jal 0x130278
    a0 = *(int32_t*)((s0) + 4);                                 // 0x00129684: lw $a0, 4($s0)
    a0 = *(int32_t*)((s0) + 4);                                 // 0x00129688: lw $a0, 4($s0)
    func_001302e0();  // 0x1302c8                                // 0x0012968c: jal 0x1302c8
    *(uint8_t*)((s0) + 1) = v0;                                 // 0x00129690: sb $v0, 1($s0)
    v1 = *(uint8_t*)((s0) + 1);                                 // 0x00129698: lbu $v1, 1($s0)
    a1 = *(int32_t*)((s0) + 0x14);                              // 0x0012969c: lw $a1, 0x14($s0)
    v1 = v1 + -3;                                               // 0x001296a0: addiu $v1, $v1, -3
    v0 = v0 - a1;                                               // 0x001296a4: subu $v0, $v0, $a1
    v1 = ((unsigned)v1 < (unsigned)2) ? 1 : 0;                  // 0x001296a8: sltiu $v1, $v1, 2
    a1 = a1 + v0;                                               // 0x001296ac: addu $a1, $a1, $v0
    if (v1 == 0) goto label_0x1296c0;                           // 0x001296b0: beqz $v1, 0x1296c0
    *(uint32_t*)((s0) + 0x20) = v0;                             // 0x001296b4: sw $v0, 0x20($s0)
    func_00129010();  // 0x128fa0                                // 0x001296b8: jal 0x128fa0
    *(uint32_t*)((s0) + 0x14) = a1;                             // 0x001296bc: sw $a1, 0x14($s0)
label_0x1296c0:
    s1 = *(int8_t*)((s0) + 3);                                  // 0x001296c0: lb $s1, 3($s0)
label_0x1296c4:
    v0 = 1;                                                     // 0x001296c4: addiu $v0, $zero, 1
    if (s1 != v0) goto label_0x12970c;                          // 0x001296c8: bnel $s1, $v0, 0x12970c
    func_00130280();  // 0x130278                                // 0x001296d0: jal 0x130278
    a0 = *(int32_t*)((s0) + 4);                                 // 0x001296d4: lw $a0, 4($s0)
    if (s2 != s1) goto label_0x12970c;                          // 0x001296dc: bnel $s2, $s1, 0x12970c
    func_001302e0();  // 0x1302c8                                // 0x001296e4: jal 0x1302c8
    a0 = *(int32_t*)((s0) + 4);                                 // 0x001296e8: lw $a0, 4($s0)
    v1 = *(int32_t*)((s0) + 0x14);                              // 0x001296ec: lw $v1, 0x14($s0)
    v0 = v0 - v1;                                               // 0x001296f4: subu $v0, $v0, $v1
    func_00129010();  // 0x128fa0                                // 0x001296f8: jal 0x128fa0
    *(uint32_t*)((s0) + 0x20) = v0;                             // 0x001296fc: sw $v0, 0x20($s0)
    *(uint8_t*)((s0) + 1) = s2;                                 // 0x00129700: sb $s2, 1($s0)
    *(uint8_t*)((s0) + 3) = 0;                                  // 0x00129704: sb $zero, 3($s0)
label_0x12970c:
    return;                                                     // 0x00129718: jr $ra
    sp = sp + 0x20;                                             // 0x0012971c: addiu $sp, $sp, 0x20
}