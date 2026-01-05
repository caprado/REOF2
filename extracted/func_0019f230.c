/** @category: graphics/init @status: complete @author: caprado */
void func_0019f230() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x0019f230: addiu $sp, $sp, -0x20
    func_001aaf50();  // 1aaf50                                // 0x0019f238: jal 0x1aaf50
    func_0019f130();  // 19f130                                // 0x0019f240: jal 0x19f130
    /* nop */                                                   // 0x0019f244: nop 
    if (v0 != 0) goto label_0x19f258;                           // 0x0019f248: bnez $v0, 0x19f258
    /* nop */                                                   // 0x0019f24c: nop 
    goto label_0x19f2c8;                                        // 0x0019f250: b 0x19f2c8
label_0x19f258:
    func_001123b0();  // 1123b0                                // 0x0019f258: jal 0x1123b0
    /* nop */                                                   // 0x0019f25c: nop 
    func_001030a8();  // 1030a8                                // 0x0019f260: jal 0x1030a8
    a0 = 1;                                                     // 0x0019f264: addiu $a0, $zero, 1
label_0x19f26c:
    func_00103080();  // 103080                                // 0x0019f26c: jal 0x103080
    v1 = 0x29 << 16;                                            // 0x0019f274: lui $v1, 0x29
    a0 = s0 << 2;                                               // 0x0019f278: sll $a0, $s0, 2
    v1 = v1 + -0x90;                                            // 0x0019f27c: addiu $v1, $v1, -0x90
    s0 = s0 + 1;                                                // 0x0019f280: addiu $s0, $s0, 1
    v1 = v1 + a0;                                               // 0x0019f284: addu $v1, $v1, $a0
    g_00290334 = v0;  // Global at 0x00290334                   // 0x0019f288: sw $v0, 0x3c4($v1)
    v0 = (s0 < 0xa) ? 1 : 0;                                    // 0x0019f28c: slti $v0, $s0, 0xa
    if (v0 != 0) goto label_0x19f26c;                           // 0x0019f290: bnez $v0, 0x19f26c
    /* nop */                                                   // 0x0019f294: nop 
    func_0017fe30();  // 17fe30                                // 0x0019f298: jal 0x17fe30
    /* nop */                                                   // 0x0019f29c: nop 
    a0 = 0x29 << 16;                                            // 0x0019f2a0: lui $a0, 0x29
    a2 = 0x19 << 16;                                            // 0x0019f2a4: lui $a2, 0x19
    v0 = 1;                                                     // 0x0019f2a8: addiu $v0, $zero, 1
    at = 0x29 << 16;                                            // 0x0019f2ac: lui $at, 0x29
    a0 = a0 + -0x350;                                           // 0x0019f2b0: addiu $a0, $a0, -0x350
    g_0028fcb0 = v0;  // Global at 0x0028fcb0                   // 0x0019f2b4: sw $v0, -0x350($at)
    a1 = 0x1000;                                                // 0x0019f2b8: addiu $a1, $zero, 0x1000
    func_0018ccc0();  // 18ccc0                                // 0x0019f2bc: jal 0x18ccc0
    a2 = a2 + -0x3010;                                          // 0x0019f2c0: addiu $a2, $a2, -0x3010
    v0 = 1;                                                     // 0x0019f2c4: addiu $v0, $zero, 1
label_0x19f2c8:
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x0019f2cc: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x0019f2d0: jr $ra
    sp = sp + 0x20;                                             // 0x0019f2d4: addiu $sp, $sp, 0x20
}