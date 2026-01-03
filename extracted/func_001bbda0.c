void func_001bbda0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_20, local_22, local_24, local_26, local_28;
    
    sp = sp + -0x30;                                            // 0x001bbda0: addiu $sp, $sp, -0x30
    at = 0x31 << 16;                                            // 0x001bbda4: lui $at, 0x31
    v1 = 0x80;                                                  // 0x001bbdac: addiu $v1, $zero, 0x80
    s0 = g_003137d0;  // Global at 0x003137d0                   // 0x001bbdb4: lbu $s0, 0x37d0($at)
    if (s0 == v1) goto label_0x1bbe70;                          // 0x001bbdb8: beq $s0, $v1, 0x1bbe70
    at = ((unsigned)s0 < (unsigned)0x81) ? 1 : 0;               // 0x001bbdbc: sltiu $at, $s0, 0x81
    if (at != 0) goto label_0x1bbde0;                           // 0x001bbdc0: bnez $at, 0x1bbde0
    a0 = 4;                                                     // 0x001bbdc4: addiu $a0, $zero, 4
    a0 = 4;                                                     // 0x001bbdc8: addiu $a0, $zero, 4
    func_001aea70();  // 1aea70                                // 0x001bbdcc: jal 0x1aea70
    a1 = 1;                                                     // 0x001bbdd0: addiu $a1, $zero, 1
    s0 = s0 + -0x80;                                            // 0x001bbdd4: addiu $s0, $s0, -0x80
    goto label_0x1bbdf8;                                        // 0x001bbdd8: b 0x1bbdf8
    a1 = 0xff;                                                  // 0x001bbddc: addiu $a1, $zero, 0xff
label_0x1bbde0:
    func_001aea70();  // 1aea70                                // 0x001bbde0: jal 0x1aea70
    a1 = 5;                                                     // 0x001bbde4: addiu $a1, $zero, 5
    v0 = 0x80;                                                  // 0x001bbde8: addiu $v0, $zero, 0x80
    s0 = v0 - s0;                                               // 0x001bbdf0: subu $s0, $v0, $s0
    s0 = s0 << 1;                                               // 0x001bbdf4: sll $s0, $s0, 1
label_0x1bbdf8:
    v0 = 0x280;                                                 // 0x001bbdf8: addiu $v0, $zero, 0x280
    v1 = s0 << 0x18;                                            // 0x001bbdfc: sll $v1, $s0, 0x18
    local_24 = v0;                                              // 0x001bbe00: sh $v0, 0x24($sp)
    a0 = 0xd;                                                   // 0x001bbe04: addiu $a0, $zero, 0xd
    v0 = 0x1c0;                                                 // 0x001bbe08: addiu $v0, $zero, 0x1c0
    local_22 = 0;                                               // 0x001bbe0c: sh $zero, 0x22($sp)
    local_26 = v0;                                              // 0x001bbe10: sh $v0, 0x26($sp)
    v0 = a1 << 0x10;                                            // 0x001bbe14: sll $v0, $a1, 0x10
    local_20 = 0;                                               // 0x001bbe18: sh $zero, 0x20($sp)
    v1 = v1 | v0;                                               // 0x001bbe1c: or $v1, $v1, $v0
    v0 = a1 << 8;                                               // 0x001bbe20: sll $v0, $a1, 8
    v0 = v0 | v1;                                               // 0x001bbe24: or $v0, $v0, $v1
    v0 = a1 | v0;                                               // 0x001bbe28: or $v0, $a1, $v0
    func_001aefd0();  // 1aefd0                                // 0x001bbe30: jal 0x1aefd0
    local_28 = v0;                                              // 0x001bbe34: sw $v0, 0x28($sp)
    a0 = 0x5f;                                                  // 0x001bbe38: addiu $a0, $zero, 0x5f
    func_001aefd0();  // 1aefd0                                // 0x001bbe3c: jal 0x1aefd0
    a1 = 5;                                                     // 0x001bbe40: addiu $a1, $zero, 5
    a0 = 0x60;                                                  // 0x001bbe44: addiu $a0, $zero, 0x60
    func_001aefd0();  // 1aefd0                                // 0x001bbe48: jal 0x1aefd0
    a0 = 0x6c;                                                  // 0x001bbe50: addiu $a0, $zero, 0x6c
    func_001aefd0();  // 1aefd0                                // 0x001bbe54: jal 0x1aefd0
    a0 = 4;                                                     // 0x001bbe5c: addiu $a0, $zero, 4
    func_001aea70();  // 1aea70                                // 0x001bbe60: jal 0x1aea70
    a1 = 5;                                                     // 0x001bbe64: addiu $a1, $zero, 5
    func_001ab530();  // 1ab530                                // 0x001bbe68: jal 0x1ab530
    a0 = sp + 0x20;                                             // 0x001bbe6c: addiu $a0, $sp, 0x20
label_0x1bbe70:
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001bbe74: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001bbe78: jr $ra
    sp = sp + 0x30;                                             // 0x001bbe7c: addiu $sp, $sp, 0x30
}