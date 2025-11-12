void func_00132e68() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_0, local_10, local_8;
    
    sp = sp + -0x40;                                            // 0x00132e68: addiu $sp, $sp, -0x40
    v1 = (a1 < 2) ? 1 : 0;                                      // 0x00132e6c: slti $v1, $a1, 2
    if (v1 != 0) goto label_0x132ef0;                           // 0x00132e80: bnez $v1, 0x132ef0
    v1 = *(uint16_t*)(a2);                                      // 0x00132e88: lhu $v1, 0($a2)
    a3 = 0 | 0x8000;                                            // 0x00132e8c: ori $a3, $zero, 0x8000
    a2 = v1 << 8;                                               // 0x00132e90: sll $a2, $v1, 8
    v1 = (unsigned)v1 >> 8;                                     // 0x00132e94: srl $v1, $v1, 8
    v1 = v1 | a2;                                               // 0x00132e98: or $v1, $v1, $a2
    v1 = v1 & 0xffff;                                           // 0x00132e9c: andi $v1, $v1, 0xffff
    if (v1 != a3) goto label_0x132ef4;                          // 0x00132ea0: bnel $v1, $a3, 0x132ef4
    v0 = sp + 0x18;                                             // 0x00132ea8: addiu $v0, $sp, 0x18
    v1 = sp + 0x1c;                                             // 0x00132eac: addiu $v1, $sp, 0x1c
    a2 = sp + 0x10;                                             // 0x00132eb0: addiu $a2, $sp, 0x10
    a3 = sp + 0x12;                                             // 0x00132eb4: addiu $a3, $sp, 0x12
    t0 = sp + 0x13;                                             // 0x00132eb8: addiu $t0, $sp, 0x13
    t1 = sp + 0x14;                                             // 0x00132ebc: addiu $t1, $sp, 0x14
    t2 = sp + 0x15;                                             // 0x00132ec0: addiu $t2, $sp, 0x15
    t3 = sp + 0x20;                                             // 0x00132ec4: addiu $t3, $sp, 0x20
    local_0 = v0;                                               // 0x00132ec8: sw $v0, 0($sp)
    func_00126558();  // 0x126458                                // 0x00132ecc: jal 0x126458
    local_8 = v1;                                               // 0x00132ed0: sw $v1, 8($sp)
    if (v0 >= 0) goto label_0x132ee8;                           // 0x00132ed4: bgez $v0, 0x132ee8
    v1 = local_10;                                              // 0x00132ed8: lh $v1, 0x10($sp)
    goto label_0x132ef0;                                        // 0x00132edc: b 0x132ef0
    /* nop */                                                   // 0x00132ee4: nop 
label_0x132ee8:
    v0 = 1;                                                     // 0x00132ee8: addiu $v0, $zero, 1
    *(uint32_t*)(s0) = v1;                                      // 0x00132eec: sw $v1, 0($s0)
label_0x132ef0:
label_0x132ef4:
    return;                                                     // 0x00132ef8: jr $ra
    sp = sp + 0x40;                                             // 0x00132efc: addiu $sp, $sp, 0x40
}