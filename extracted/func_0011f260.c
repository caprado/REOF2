/** @category ps2-kernel-not-needed @status complete @author caprado */
void func_0011f260() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x0011f260: addiu $sp, $sp, -0x20
    v0 = (unsigned)a0 >> 8;                                     // 0x0011f264: srl $v0, $a0, 8
    if (a0 < 0) goto label_0x11f28c;                            // 0x0011f270: bltz $a0, 0x11f28c
    s0 = v0 << 4;                                               // 0x0011f274: sll $s0, $v0, 4
    v0 = *(int32_t*)((s0) + 4);                                 // 0x0011f278: lw $v0, 4($s0)
    v0 = a0 ^ v0;                                               // 0x0011f27c: xor $v0, $a0, $v0
    v0 = v0 & 0xff;                                             // 0x0011f280: andi $v0, $v0, 0xff
    if (v0 == 0) goto label_0x11f298;                           // 0x0011f284: beqz $v0, 0x11f298
    /* nop */                                                   // 0x0011f288: nop 
label_0x11f28c:
    v0 = 0x8000 << 16;                                          // 0x0011f28c: lui $v0, 0x8000
    goto label_0x11f2c8;                                        // 0x0011f290: b 0x11f2c8
    v0 = v0 | 0x8002;                                           // 0x0011f294: ori $v0, $v0, 0x8002
label_0x11f298:
    a0 = *(int32_t*)((s0) + 4);                                 // 0x0011f298: lw $a0, 4($s0)
    func_0011e5e8();  // 11e5e8                                // 0x0011f29c: jal 0x11e5e8
    /* nop */                                                   // 0x0011f2a0: nop 
    if (a0 != 0) goto label_0x11f2c8;                           // 0x0011f2a8: bnez $a0, 0x11f2c8
    v0 = 0x25 << 16;                                            // 0x0011f2b0: lui $v0, 0x25
    v1 = g_00253480;  // Global at 0x00253480                   // 0x0011f2b4: lw $v1, 0x3480($v0)
    g_00253480 = s0;  // Global at 0x00253480                   // 0x0011f2b8: sw $s0, 0x3480($v0)
    *(uint32_t*)(s0) = v1;                                      // 0x0011f2bc: sw $v1, 0($s0)
    *(uint32_t*)((s0) + 4) = 0;                                 // 0x0011f2c0: sw $zero, 4($s0)
label_0x11f2c8:
    return;                                                     // 0x0011f2d0: jr $ra
    sp = sp + 0x20;                                             // 0x0011f2d4: addiu $sp, $sp, 0x20
}