void func_00166800() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    v0 = a3 << 3;                                               // 0x00166800: sll $v0, $a3, 3
    sp = sp + -0x20;                                            // 0x00166804: addiu $sp, $sp, -0x20
    v0 = v0 - a3;                                               // 0x00166808: subu $v0, $v0, $a3
    v1 = a3 << 2;                                               // 0x0016680c: sll $v1, $a3, 2
    v0 = v0 << 2;                                               // 0x00166814: sll $v0, $v0, 2
    s1 = a1 + v1;                                               // 0x0016681c: addu $s1, $a1, $v1
    s2 = a2 + v1;                                               // 0x00166824: addu $s2, $a2, $v1
    v0 = v0 + a3;                                               // 0x0016682c: addu $v0, $v0, $a3
    v0 = v0 << 2;                                               // 0x00166830: sll $v0, $v0, 2
    a1 = 2;                                                     // 0x00166834: addiu $a1, $zero, 2
    a2 = *(int32_t*)(s2);                                       // 0x00166838: lw $a2, 0($s2)
    s0 = a0 + v0;                                               // 0x0016683c: addu $s0, $a0, $v0
    s0 = s0 + 0x10;                                             // 0x00166844: addiu $s0, $s0, 0x10
    func_001669c8();  // 0x166978                                // 0x00166848: jal 0x166978
    a2 = ((unsigned)0 < (unsigned)a2) ? 1 : 0;                  // 0x0016684c: sltu $a2, $zero, $a2
    v0 = *(int32_t*)(s1);                                       // 0x00166850: lw $v0, 0($s1)
    v1 = *(int32_t*)(s2);                                       // 0x00166854: lw $v1, 0($s2)
    *(uint32_t*)(s0) = v0;                                      // 0x00166858: sw $v0, 0($s0)
    *(uint32_t*)((s0) + 4) = v1;                                // 0x0016685c: sw $v1, 4($s0)
    *(uint32_t*)((s0) + 0x2c) = 0;                              // 0x00166860: sw $zero, 0x2c($s0)
    *(uint32_t*)((s0) + 8) = 0;                                 // 0x00166864: sw $zero, 8($s0)
    *(uint32_t*)((s0) + 0xc) = 0;                               // 0x00166868: sw $zero, 0xc($s0)
    *(uint32_t*)((s0) + 0x10) = 0;                              // 0x0016686c: sw $zero, 0x10($s0)
    *(uint32_t*)((s0) + 0x14) = 0;                              // 0x00166870: sw $zero, 0x14($s0)
    *(uint32_t*)((s0) + 0x18) = 0;                              // 0x00166874: sw $zero, 0x18($s0)
    *(uint32_t*)((s0) + 0x1c) = 0;                              // 0x00166878: sw $zero, 0x1c($s0)
    *(uint32_t*)((s0) + 0x20) = 0;                              // 0x0016687c: sw $zero, 0x20($s0)
    *(uint32_t*)((s0) + 0x24) = 0;                              // 0x00166880: sw $zero, 0x24($s0)
    *(uint32_t*)((s0) + 0x28) = 0;                              // 0x00166884: sw $zero, 0x28($s0)
    return;                                                     // 0x00166898: jr $ra
    sp = sp + 0x20;                                             // 0x0016689c: addiu $sp, $sp, 0x20
}