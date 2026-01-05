/** @category: game/rendering @status: complete @author: caprado */
void func_00198130() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x00198130: addiu $sp, $sp, -0x20
    a1 = 0x10;                                                  // 0x00198134: addiu $a1, $zero, 0x10
    func_0018dc30();  // 18dc30                                // 0x00198144: jal 0x18dc30
    a0 = 0x30;                                                  // 0x00198148: addiu $a0, $zero, 0x30
    v1 = 0 | 0xf000;                                            // 0x0019814c: ori $v1, $zero, 0xf000
    a3 = 0x29 << 16;                                            // 0x00198150: lui $a3, 0x29
    a0 = 0x1300 << 16;                                          // 0x00198158: lui $a0, 0x1300
    a2 = a1 | 2;                                                // 0x0019815c: ori $a2, $a1, 2
    v1 = 0x5100 << 16;                                          // 0x00198160: lui $v1, 0x5100
    a1 = v1 | 2;                                                // 0x00198164: ori $a1, $v1, 2
    *(uint32_t*)((v0) + 8) = a0;                                // 0x0019816c: sw $a0, 8($v0)
    v1 = 0x1000 << 16;                                          // 0x00198170: lui $v1, 0x1000
    *(uint32_t*)((v0) + 0xc) = a1;                              // 0x00198178: sw $a1, 0xc($v0)
    v1 = 0 | 0x8001;                                            // 0x0019817c: ori $v1, $zero, 0x8001
    a3 = a3 + -0x350;                                           // 0x00198180: addiu $a3, $a3, -0x350
    v1 = v1 | a0;                                               // 0x00198184: or $v1, $v1, $a0
    a0 = 0xe;                                                   // 0x0019818c: addiu $a0, $zero, 0xe
    v1 = (unsigned)s0 >> 0x10;                                  // 0x00198194: srl $v1, $s0, 0x10
    a0 = (unsigned)s0 >> 8;                                     // 0x00198198: srl $a0, $s0, 8
    a2 = v1 & 0xff;                                             // 0x0019819c: andi $a2, $v1, 0xff
    a1 = a0 & 0xff;                                             // 0x001981a0: andi $a1, $a0, 0xff
    v1 = s0 & 0xff;                                             // 0x001981a4: andi $v1, $s0, 0xff
    a2 = a2 | a1;                                               // 0x001981b0: or $a2, $a2, $a1
    v1 = 0x3d;                                                  // 0x001981b4: addiu $v1, $zero, 0x3d
    a2 = a0 | a2;                                               // 0x001981b8: or $a2, $a0, $a2
    func_0018ce40();  // 18ce40                                // 0x001981d0: jal 0x18ce40
    v0 = 1;                                                     // 0x001981dc: addiu $v0, $zero, 1
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001981e0: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001981e4: jr $ra
    sp = sp + 0x20;                                             // 0x001981e8: addiu $sp, $sp, 0x20
}