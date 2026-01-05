/** @category graphics/display @status complete @author caprado */
void func_001a05c0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x001a05c0: addiu $sp, $sp, -0x20
    v0 = 1;                                                     // 0x001a05c4: addiu $v0, $zero, 1
    at = 0x29 << 16;                                            // 0x001a05d4: lui $at, 0x29
    v0 = g_00290310;  // Global at 0x00290310                   // 0x001a05d8: lw $v0, 0x310($at)
    a0 = 0x140;                                                 // 0x001a05dc: addiu $a0, $zero, 0x140
    t4 = *(int32_t*)((gp) + -0x644c);                           // 0x001a05e0: lw $t4, -0x644c($gp)
    a1 = 0x10;                                                  // 0x001a05e4: addiu $a1, $zero, 0x10
    t3 = *(int32_t*)((gp) + -0x6448);                           // 0x001a05e8: lw $t3, -0x6448($gp)
    at = 0x29 << 16;                                            // 0x001a05ec: lui $at, 0x29
    t6 = g_00290318;  // Global at 0x00290318                   // 0x001a05f0: lw $t6, 0x318($at)
    a3 = t4 + -1;                                               // 0x001a05f4: addiu $a3, $t4, -1
    t0 = t3 + -1;                                               // 0x001a05f8: addiu $t0, $t3, -1
    t2 = t2 | t0;                                               // 0x001a0614: or $t2, $t2, $t0
    at = 0x29 << 16;                                            // 0x001a0618: lui $at, 0x29
    t0 = t6 << 4;                                               // 0x001a061c: sll $t0, $t6, 4
    t5 = g_00290314;  // Global at 0x00290314                   // 0x001a0620: lw $t5, 0x314($at)
    a3 = t6 + t4;                                               // 0x001a0628: addu $a3, $t6, $t4
    at = 0x29 << 16;                                            // 0x001a062c: lui $at, 0x29
    at = 0x29 << 16;                                            // 0x001a0634: lui $at, 0x29
    at = 0x29 << 16;                                            // 0x001a063c: lui $at, 0x29
    at = 0x29 << 16;                                            // 0x001a0644: lui $at, 0x29
    at = 0x29 << 16;                                            // 0x001a064c: lui $at, 0x29
    a2 = t5 + t3;                                               // 0x001a0650: addu $a2, $t5, $t3
    a2 = a2 << 4;                                               // 0x001a0658: sll $a2, $a2, 4
    v1 = t5 << 4;                                               // 0x001a065c: sll $v1, $t5, 4
    at = 0x29 << 16;                                            // 0x001a0660: lui $at, 0x29
    v1 = v1 | t0;                                               // 0x001a0664: or $v1, $v1, $t0
    v1 = a3 << 4;                                               // 0x001a066c: sll $v1, $a3, 4
    at = 0x29 << 16;                                            // 0x001a0670: lui $at, 0x29
    a3 = (unsigned)v0 >> 0x10;                                  // 0x001a0678: srl $a3, $v0, 0x10
    v1 = a2 | v1;                                               // 0x001a067c: or $v1, $a2, $v1
    a3 = a3 & 0xff;                                             // 0x001a0680: andi $a3, $a3, 0xff
    at = 0x29 << 16;                                            // 0x001a0688: lui $at, 0x29
    v1 = (unsigned)v0 >> 8;                                     // 0x001a068c: srl $v1, $v0, 8
    a2 = v1 & 0xff;                                             // 0x001a0694: andi $a2, $v1, 0xff
    v1 = v0 & 0xff;                                             // 0x001a0698: andi $v1, $v0, 0xff
    v0 = (unsigned)v0 >> 0x18;                                  // 0x001a06a0: srl $v0, $v0, 0x18
    a2 = a3 | a2;                                               // 0x001a06a4: or $a2, $a3, $a2
    v0 = v0 & 0xff;                                             // 0x001a06ac: andi $v0, $v0, 0xff
    v1 = v1 | a2;                                               // 0x001a06b0: or $v1, $v1, $a2
    v0 = v0 | v1;                                               // 0x001a06b8: or $v0, $v0, $v1
    at = 0x29 << 16;                                            // 0x001a06bc: lui $at, 0x29
    v0 = v0 | t1;                                               // 0x001a06c0: or $v0, $v0, $t1
    at = 0x29 << 16;                                            // 0x001a06c8: lui $at, 0x29
    at = 0x29 << 16;                                            // 0x001a06d0: lui $at, 0x29
    at = 0x29 << 16;                                            // 0x001a06d8: lui $at, 0x29
    at = 0x29 << 16;                                            // 0x001a06e4: lui $at, 0x29
    at = 0x29 << 16;                                            // 0x001a06ec: lui $at, 0x29
    at = 0x29 << 16;                                            // 0x001a06f4: lui $at, 0x29
    at = 0x29 << 16;                                            // 0x001a06fc: lui $at, 0x29
    at = 0x29 << 16;                                            // 0x001a0704: lui $at, 0x29
    at = 0x29 << 16;                                            // 0x001a070c: lui $at, 0x29
    func_0018dc30();  // 18dc30                                // 0x001a0710: jal 0x18dc30
    a0 = 0x29 << 16;                                            // 0x001a071c: lui $a0, 0x29
    a0 = a0 + -0x310;                                           // 0x001a0720: addiu $a0, $a0, -0x310
    func_001899f8();  // 1899f8                                // 0x001a0728: jal 0x1899f8
    a2 = 0x14;                                                  // 0x001a072c: addiu $a2, $zero, 0x14
    a3 = 0x29 << 16;                                            // 0x001a0734: lui $a3, 0x29
    func_0018ce40();  // 18ce40                                // 0x001a0744: jal 0x18ce40
    a3 = a3 + -0x350;                                           // 0x001a0748: addiu $a3, $a3, -0x350
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001a0750: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001a0754: jr $ra
    sp = sp + 0x20;                                             // 0x001a0758: addiu $sp, $sp, 0x20
}