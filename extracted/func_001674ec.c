void func_001674ec() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x40;                                            // 0x001674ec: addiu $sp, $sp, -0x40
    v1 = v1 - a1;                                               // 0x001674f0: subu $v1, $v1, $a1
    v1 = v1 << 2;                                               // 0x001674f8: sll $v1, $v1, 2
    v1 = v1 + a1;                                               // 0x00167500: addu $v1, $v1, $a1
    v1 = v1 << 2;                                               // 0x00167508: sll $v1, $v1, 2
    a2 = s2 + 0x1140;                                           // 0x00167510: addiu $a2, $s2, 0x1140
    if (s1 == 0) goto label_0x1675c0;                           // 0x00167528: beqz $s1, 0x1675c0
    a2 = a2 + v1;                                               // 0x0016752c: addu $a2, $a2, $v1
    v0 = *(int32_t*)((a2) + 4);                                 // 0x00167530: lw $v0, 4($a2)
    /* bnezl $v0, 0x167550 */                                   // 0x00167534: bnezl $v0, 0x167550
    s0 = a2 + 0x10;                                             // 0x00167538: addiu $s0, $a2, 0x10
    a1 = 0xff00 << 16;                                          // 0x0016753c: lui $a1, 0xff00
    func_00169940();  // 0x1698d0                                // 0x00167540: jal 0x1698d0
    a1 = a1 | 0x401;                                            // 0x00167544: ori $a1, $a1, 0x401
    goto label_0x1675c4;                                        // 0x00167548: b 0x1675c4
    func_00169ba0();  // 0x169b88                                // 0x00167550: jal 0x169b88
    v0 = *(int32_t*)((s0) + 0x20);                              // 0x0016755c: lw $v0, 0x20($s0)
    a1 = 0xff00 << 16;                                          // 0x00167560: lui $a1, 0xff00
    a2 = *(int32_t*)((s0) + 0x1c);                              // 0x00167564: lw $a2, 0x1c($s0)
    a1 = a1 | 0x406;                                            // 0x00167568: ori $a1, $a1, 0x406
    v0 = v0 + s1;                                               // 0x0016756c: addu $v0, $v0, $s1
    v1 = (v0 < a2) ? 1 : 0;                                     // 0x00167570: slt $v1, $v0, $a2
    a3 = v0 - a2;                                               // 0x00167574: subu $a3, $v0, $a2
    if (v1 != 0) goto label_0x167584;                           // 0x00167578: bnez $v1, 0x167584
    *(uint32_t*)((s0) + 0x20) = v0;                             // 0x0016757c: sw $v0, 0x20($s0)
    *(uint32_t*)((s0) + 0x20) = a3;                             // 0x00167580: sw $a3, 0x20($s0)
label_0x167584:
    v0 = *(int32_t*)((s0) + 0x28);                              // 0x00167584: lw $v0, 0x28($s0)
    v1 = *(int32_t*)((s0) + 0x2c);                              // 0x00167588: lw $v1, 0x2c($s0)
    v0 = v0 + s1;                                               // 0x0016758c: addu $v0, $v0, $s1
    v1 = v1 + a2;                                               // 0x00167590: addu $v1, $v1, $a2
    v1 = (v1 < v0) ? 1 : 0;                                     // 0x00167594: slt $v1, $v1, $v0
    if (v1 == 0) goto label_0x1675ac;                           // 0x00167598: beqz $v1, 0x1675ac
    *(uint32_t*)((s0) + 0x28) = v0;                             // 0x0016759c: sw $v0, 0x28($s0)
    func_00169940();  // 0x1698d0                                // 0x001675a0: jal 0x1698d0
    /* nop */                                                   // 0x001675a4: nop 
label_0x1675ac:
    v0 = 1;                                                     // 0x001675ac: addiu $v0, $zero, 1
    func_00169bc8();  // 0x169ba0                                // 0x001675b4: jal 0x169ba0
    *(uint32_t*)((s2) + 0x44) = v0;                             // 0x001675b8: sw $v0, 0x44($s2)
label_0x1675c0:
label_0x1675c4:
    return;                                                     // 0x001675d4: jr $ra
    sp = sp + 0x40;                                             // 0x001675d8: addiu $sp, $sp, 0x40
}