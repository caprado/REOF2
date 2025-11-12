void func_00129128() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x00129128: addiu $sp, $sp, -0x20
    func_00130280();  // 0x130278                                // 0x00129148: jal 0x130278
    a0 = *(int32_t*)((s0) + 4);                                 // 0x0012914c: lw $a0, 4($s0)
    v1 = 1;                                                     // 0x00129150: addiu $v1, $zero, 1
    if (v0 == v1) goto label_0x129164;                          // 0x00129154: beq $v0, $v1, 0x129164
    /* nop */                                                   // 0x00129158: nop 
    func_00130458();  // 0x130408                                // 0x0012915c: jal 0x130408
    a0 = *(int32_t*)((s0) + 4);                                 // 0x00129160: lw $a0, 4($s0)
label_0x129164:
    func_001261b8();  // 0x1261a0                                // 0x00129164: jal 0x1261a0
    /* nop */                                                   // 0x00129168: nop 
    a2 = *(int32_t*)((s0) + 0x14);                              // 0x0012916c: lw $a2, 0x14($s0)
    v0 = *(int32_t*)((s0) + 0xc);                               // 0x00129170: lw $v0, 0xc($s0)
    a1 = -1;                                                    // 0x00129174: addiu $a1, $zero, -1
    v1 = *(int32_t*)((s0) + 0x30);                              // 0x00129178: lw $v1, 0x30($s0)
    v0 = v0 - a2;                                               // 0x0012917c: subu $v0, $v0, $a2
    *(uint32_t*)((s0) + 0x20) = 0;                              // 0x00129180: sw $zero, 0x20($s0)
    a0 = (s1 < v0) ? 1 : 0;                                     // 0x00129184: slt $a0, $s1, $v0
    v1 = v1 + a2;                                               // 0x00129188: addu $v1, $v1, $a2
    if (a0 != 0) v0 = s1;                                       // 0x0012918c: movn $v0, $s1, $a0
    *(uint32_t*)((s0) + 0x18) = v1;                             // 0x00129190: sw $v1, 0x18($s0)
    if (v0 != 0) goto label_0x1291b0;                           // 0x00129194: bnez $v0, 0x1291b0
    *(uint32_t*)((s0) + 0x1c) = v0;                             // 0x00129198: sw $v0, 0x1c($s0)
    v0 = 3;                                                     // 0x0012919c: addiu $v0, $zero, 3
    *(uint8_t*)((s0) + 1) = v0;                                 // 0x001291a0: sb $v0, 1($s0)
    goto label_0x129204;                                        // 0x001291a4: b 0x129204
    /* nop */                                                   // 0x001291ac: nop 
label_0x1291b0:
    func_001304a8();  // 0x130468                                // 0x001291b0: jal 0x130468
    a0 = *(int32_t*)((s0) + 4);                                 // 0x001291b4: lw $a0, 4($s0)
    a0 = *(int32_t*)((s0) + 4);                                 // 0x001291b8: lw $a0, 4($s0)
    func_00130c70();  // 0x130be0                                // 0x001291bc: jal 0x130be0
    a0 = *(int32_t*)((s0) + 4);                                 // 0x001291c4: lw $a0, 4($s0)
    func_00130b00();  // 0x130ae8                                // 0x001291c8: jal 0x130ae8
    a1 = *(int32_t*)((s0) + 0x2c);                              // 0x001291cc: lw $a1, 0x2c($s0)
    v1 = 2;                                                     // 0x001291d0: addiu $v1, $zero, 2
    *(uint8_t*)((s0) + 1) = v1;                                 // 0x001291d4: sb $v1, 1($s0)
    a0 = *(int32_t*)((s0) + 4);                                 // 0x001291dc: lw $a0, 4($s0)
    func_00130b18();  // 0x130b08                                // 0x001291e0: jal 0x130b08
    *(uint8_t*)((s0) + 3) = 0;                                  // 0x001291e4: sb $zero, 3($s0)
    a0 = *(int32_t*)((s0) + 4);                                 // 0x001291e8: lw $a0, 4($s0)
    func_001302c8();  // 0x130280                                // 0x001291ec: jal 0x130280
    a1 = *(int32_t*)((s0) + 0x14);                              // 0x001291f0: lw $a1, 0x14($s0)
    a0 = *(int32_t*)((s0) + 4);                                 // 0x001291f4: lw $a0, 4($s0)
    func_001303a0();  // 0x130358                                // 0x001291f8: jal 0x130358
    a1 = *(int32_t*)((s0) + 0x1c);                              // 0x001291fc: lw $a1, 0x1c($s0)
    s0 = *(int32_t*)((s0) + 0x1c);                              // 0x00129200: lw $s0, 0x1c($s0)
label_0x129204:
    func_001261d0();  // 0x1261b8                                // 0x00129204: jal 0x1261b8
    /* nop */                                                   // 0x00129208: nop 
    return;                                                     // 0x00129220: jr $ra
    sp = sp + 0x20;                                             // 0x00129224: addiu $sp, $sp, 0x20
}