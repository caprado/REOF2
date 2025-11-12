void func_00140598() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    v0 = *(int8_t*)(a0);                                        // 0x00140598: lb $v0, 0($a0)
    a2 = 0x21 << 16;                                            // 0x0014059c: lui $a2, 0x21
    v1 = *(int8_t*)((a0) + 1);                                  // 0x001405a0: lb $v1, 1($a0)
    a2 = a2 + -0x150;                                           // 0x001405a4: addiu $a2, $a2, -0x150
    v0 = v0 << 2;                                               // 0x001405a8: sll $v0, $v0, 2
    a1 = *(int8_t*)((a0) + 2);                                  // 0x001405ac: lb $a1, 2($a0)
    v0 = v0 + a2;                                               // 0x001405b0: addu $v0, $v0, $a2
    v1 = v1 << 2;                                               // 0x001405b4: sll $v1, $v1, 2
    t1 = *(int32_t*)(v0);                                       // 0x001405b8: lw $t1, 0($v0)
    v1 = v1 + a2;                                               // 0x001405bc: addu $v1, $v1, $a2
    a3 = *(int32_t*)(v1);                                       // 0x001405c0: lw $a3, 0($v1)
    a1 = a1 << 2;                                               // 0x001405c4: sll $a1, $a1, 2
    v0 = *(int8_t*)((a0) + 3);                                  // 0x001405c8: lb $v0, 3($a0)
    v1 = t1 << 4;                                               // 0x001405cc: sll $v1, $t1, 4
    a1 = a1 + a2;                                               // 0x001405d0: addu $a1, $a1, $a2
    t1 = v1 + a3;                                               // 0x001405d4: addu $t1, $v1, $a3
    t0 = *(int32_t*)(a1);                                       // 0x001405d8: lw $t0, 0($a1)
    a1 = t1 << 4;                                               // 0x001405dc: sll $a1, $t1, 4
    v1 = *(int8_t*)((a0) + 4);                                  // 0x001405e0: lb $v1, 4($a0)
    v0 = v0 << 2;                                               // 0x001405e4: sll $v0, $v0, 2
    v0 = v0 + a2;                                               // 0x001405e8: addu $v0, $v0, $a2
    t1 = a1 + t0;                                               // 0x001405ec: addu $t1, $a1, $t0
    a3 = *(int32_t*)(v0);                                       // 0x001405f0: lw $a3, 0($v0)
    v1 = v1 << 2;                                               // 0x001405f4: sll $v1, $v1, 2
    v0 = *(int8_t*)((a0) + 5);                                  // 0x001405f8: lb $v0, 5($a0)
    a1 = t1 << 4;                                               // 0x001405fc: sll $a1, $t1, 4
    v1 = v1 + a2;                                               // 0x00140600: addu $v1, $v1, $a2
    t1 = a1 + a3;                                               // 0x00140604: addu $t1, $a1, $a3
    t0 = *(int32_t*)(v1);                                       // 0x00140608: lw $t0, 0($v1)
    v0 = v0 << 2;                                               // 0x0014060c: sll $v0, $v0, 2
    v1 = *(int8_t*)((a0) + 6);                                  // 0x00140610: lb $v1, 6($a0)
    a0 = t1 << 4;                                               // 0x00140614: sll $a0, $t1, 4
    v0 = v0 + a2;                                               // 0x00140618: addu $v0, $v0, $a2
    t1 = a0 + t0;                                               // 0x0014061c: addu $t1, $a0, $t0
    a1 = *(int32_t*)(v0);                                       // 0x00140620: lw $a1, 0($v0)
    v0 = t1 << 4;                                               // 0x00140624: sll $v0, $t1, 4
    v1 = v1 << 2;                                               // 0x00140628: sll $v1, $v1, 2
    v1 = v1 + a2;                                               // 0x0014062c: addu $v1, $v1, $a2
    t1 = v0 + a1;                                               // 0x00140630: addu $t1, $v0, $a1
    a0 = *(int32_t*)(v1);                                       // 0x00140634: lw $a0, 0($v1)
    v0 = t1 << 4;                                               // 0x00140638: sll $v0, $t1, 4
    return;                                                     // 0x0014063c: jr $ra
    v0 = v0 + a0;                                               // 0x00140640: addu $v0, $v0, $a0
}