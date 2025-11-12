void func_001ae950() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_28, local_2c;
    
    v0 = 0x2710;                                                // 0x001ae950: addiu $v0, $zero, 0x2710
    sp = sp + -0x30;                                            // 0x001ae954: addiu $sp, $sp, -0x30
    /* move to FPU: $v0, $f0 */                                 // 0x001ae958: mtc1 $v0, $f0
    v1 = 0x43fa << 16;                                          // 0x001ae964: lui $v1, 0x43fa
    /* FPU: cvt.s.w $f0, $f0 */                                 // 0x001ae968: cvt.s.w $f0, $f0
    local_2c = v1;                                              // 0x001ae970: sw $v1, 0x2c($sp)
    func_001aefd0();  // 0x1aefc0                                // 0x001ae974: jal 0x1aefc0
    *(float*)((sp) + 0x28) = FPU_F0;  // Store float            // 0x001ae978: swc1 $f0, 0x28($sp)
    if (s0 != 0) goto label_0x1aea18;                           // 0x001ae97c: bnez $s0, 0x1aea18
    /* nop */                                                   // 0x001ae980: nop 
    a0 = 0xe;                                                   // 0x001ae984: addiu $a0, $zero, 0xe
    func_001aefe0();  // 0x1aefd0                                // 0x001ae988: jal 0x1aefd0
    a0 = 1;                                                     // 0x001ae990: addiu $a0, $zero, 1
    func_001aefe0();  // 0x1aefd0                                // 0x001ae994: jal 0x1aefd0
    a1 = 0x200;                                                 // 0x001ae998: addiu $a1, $zero, 0x200
    a0 = 0x15;                                                  // 0x001ae99c: addiu $a0, $zero, 0x15
    func_001aefe0();  // 0x1aefd0                                // 0x001ae9a0: jal 0x1aefd0
    a1 = 2;                                                     // 0x001ae9a4: addiu $a1, $zero, 2
    a0 = 0x12;                                                  // 0x001ae9a8: addiu $a0, $zero, 0x12
    func_001aefe0();  // 0x1aefd0                                // 0x001ae9ac: jal 0x1aefd0
    v0 = 0x80ff << 16;                                          // 0x001ae9b4: lui $v0, 0x80ff
    a0 = 0xf;                                                   // 0x001ae9b8: addiu $a0, $zero, 0xf
    func_001aefe0();  // 0x1aefd0                                // 0x001ae9bc: jal 0x1aefd0
    a1 = v0 | 0xffff;                                           // 0x001ae9c0: ori $a1, $v0, 0xffff
    a1 = local_2c;                                              // 0x001ae9c4: lw $a1, 0x2c($sp)
    func_001aefe0();  // 0x1aefd0                                // 0x001ae9c8: jal 0x1aefd0
    a0 = 0x10;                                                  // 0x001ae9cc: addiu $a0, $zero, 0x10
    a1 = local_28;                                              // 0x001ae9d0: lw $a1, 0x28($sp)
    func_001aefe0();  // 0x1aefd0                                // 0x001ae9d4: jal 0x1aefd0
    a0 = 0x11;                                                  // 0x001ae9d8: addiu $a0, $zero, 0x11
    a0 = 0xc;                                                   // 0x001ae9dc: addiu $a0, $zero, 0xc
    func_001aefe0();  // 0x1aefd0                                // 0x001ae9e0: jal 0x1aefd0
    a0 = 0x66;                                                  // 0x001ae9e8: addiu $a0, $zero, 0x66
    func_001aefe0();  // 0x1aefd0                                // 0x001ae9ec: jal 0x1aefd0
    a0 = 0x62;                                                  // 0x001ae9f4: addiu $a0, $zero, 0x62
    func_001aefe0();  // 0x1aefd0                                // 0x001ae9f8: jal 0x1aefd0
    a0 = 2;                                                     // 0x001aea00: addiu $a0, $zero, 2
    func_001aefe0();  // 0x1aefd0                                // 0x001aea04: jal 0x1aefd0
    func_001aefe0();  // 0x1aefd0                                // 0x001aea10: jal 0x1aefd0
label_0x1aea18:
    at = 0x31 << 16;                                            // 0x001aea18: lui $at, 0x31
    v0 = 4;                                                     // 0x001aea1c: addiu $v0, $zero, 4
    g_003137f2 = 0;  // Global at 0x003137f2                    // 0x001aea20: sb $zero, 0x37f2($at)
    a0 = 0x5e;                                                  // 0x001aea24: addiu $a0, $zero, 0x5e
    at = 0x31 << 16;                                            // 0x001aea28: lui $at, 0x31
    a1 = 0x32;                                                  // 0x001aea2c: addiu $a1, $zero, 0x32
    g_003137f0 = v0;  // Global at 0x003137f0                   // 0x001aea30: sb $v0, 0x37f0($at)
    v0 = 5;                                                     // 0x001aea34: addiu $v0, $zero, 5
    at = 0x31 << 16;                                            // 0x001aea38: lui $at, 0x31
    g_003137f1 = v0;  // Global at 0x003137f1                   // 0x001aea3c: sb $v0, 0x37f1($at)
    v0 = 0xff;                                                  // 0x001aea40: addiu $v0, $zero, 0xff
    at = 0x31 << 16;                                            // 0x001aea44: lui $at, 0x31
    func_001aefe0();  // 0x1aefd0                                // 0x001aea48: jal 0x1aefd0
    g_003137f3 = v0;  // Global at 0x003137f3                   // 0x001aea4c: sb $v0, 0x37f3($at)
    a0 = 0x63;                                                  // 0x001aea50: addiu $a0, $zero, 0x63
    func_001aefe0();  // 0x1aefd0                                // 0x001aea54: jal 0x1aefd0
    a1 = 1 << 16;                                               // 0x001aea58: lui $a1, 1
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001aea60: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001aea64: jr $ra
    sp = sp + 0x30;                                             // 0x001aea68: addiu $sp, $sp, 0x30
}